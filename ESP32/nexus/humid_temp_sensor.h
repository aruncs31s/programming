/* Author : Arun CS
 * Github : https://github.com/aruncs31s/
 * Time : 
 * Date : 20/08/2024 DD/MM/YYYY
 * Sensor : 7semi SHT40 Humidity and Temperature
 * Interface : I2C
 */ 
#ifndef __HUMD_TEMP_SENSOR__H_
#define __HUMD_TEMP_SENSOR__H_

#include <Arduino.h>
#include <SensirionI2CSht4x.h>
#include <Wire.h>


class humidTempSensor{
  public:
  /* begin() 
  - returs nothing
  - no parameters
  - just to initialize the i2c bus
  */
  void begin();
  /* get_readings()
  - to store new reading to temperature and humidity variables
  */
  void get_readings();
  float temperature;
  float humidity;
  private:
  SensirionI2CSht4x ht_sensor;
};

#endif // DEBUG
