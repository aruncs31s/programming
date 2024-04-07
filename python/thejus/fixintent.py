import time

import pynmea2
import RPi.GPIO as GPIO
import serial

# GPIO setup
GPIO.setwarnings(False)
GPIO.setmode(GPIO.BCM)
in1 = 17
in2 = 27
en_a = 4
GPIO.setup(in1, GPIO.OUT)
GPIO.setup(in2, GPIO.OUT)
GPIO.setup(en_a, GPIO.OUT)
motor_pwm = GPIO.PWM(en_a, 100)
motor_pwm.start(50)
# Open serial port outside the loop
ser = serial.Serial("/dev/ttyAMA0", baudrate=9600, timeout=1)


# Simulated serial port reading function
def read_serial():
    # Simulate reading data from a virtual serial port (COM2 in this example)
    simulated_data = (
        b"$GPRMC,123519,A,4807.038,N,01131.000,E,022.4,084.4,230394,003.1,W*6A\n"
    )
    return simulated_data


try:
    while True:
        # Read data from the serial port
        newdata = ser.readline().decode("utf-8", errors="replace").strip()

        if newdata.startswith("$GPRMC"):
            # Decode data and parse NMEA sentence
            msg = pynmea2.parse(newdata)
            lat = msg.latitude
            lng = msg.longitude

            # Print GPS information
            gps_info = "Latitude={}, Longitude={}".format(lat, lng)
            print(gps_info)

            # Check if latitude and longitude meet the condition
            if lat == 48.1173 and lng == 11.516666666666667:
                # Reduce PWM signal frequency to 30 Hz
                print("Reducing PWM signal frequency to 30 Hz")
                GPIO.output(in1, GPIO.LOW)
                GPIO.output(in2, GPIO.LOW)
                # motor_pwm.ChangeFrequency(30)  # Change PWM frequency to 30 Hz
                motor_pwm.ChangeDutyCycle(30)
            else:
                # Restore PWM signal frequency to default (100 Hz)
                GPIO.output(in1, GPIO.HIGH)
                GPIO.output(in2, GPIO.HIGH)
                motor_pwm.ChangeDutyCycle(50)
                # motor_pwm = GPIO.PWM(en_a, 100)
                # motor_pwm.start(50)

            # Change PWM frequency to 100 Hz

        # Add a delay to prevent continuous high CPU usage
        time.sleep(0.1)

except KeyboardInterrupt:
    print("Exiting program.")
    GPIO.cleanup()  # Cleanup GPIO settings

# Close the serial port when done (not reached in an infinite loop)
ser.close()
