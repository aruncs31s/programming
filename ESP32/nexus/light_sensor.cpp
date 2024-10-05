#include "light_sensor.h"
#include "pins.h"
// DFRobot_VEML7700 light_sensor;

void lightSensor::begin() { 
  light_sensor.begin();}
float lightSensor::get_value() {
  light_sensor.getALSLux(_current_intensity);
  return _current_intensity;
}
