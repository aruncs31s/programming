/* Author : Arun CS
 * Github : https://github.com/aruncs31s/
 * Time : 
 * Date : 20/08/2024 DD/MM/YYYY
 * Sensor : VEML7700 Ambient Light Sensor 
 * Interface : I2C
 */
#ifndef SENSOR_H
#define SENSOR_H

#include <DFRobot_VEML7700.h>
#include <Wire.h>

// float _current_intensity;
class lightSensor {
public:
  void begin();
  float get_value();

private:
  DFRobot_VEML7700 light_sensor; // Instance of the sensor
  float _current_intensity;
};
#endif // SENSOR_H
