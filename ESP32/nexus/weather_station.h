#ifndef __WEATHER_STATION_H_
#define __WEATHER_STATION_H_
#include "SparkFun_Weather_Meter_Kit_Arduino_Library.h"
#include "pins.h"

class weatherStation {
public:
 
 weatherStation() : weatherMeterKit(PIN_WIND_DIRECTION, PIN_WIND_SPEED, PIN_RAINFALL) {}
  void init();
  float get_speed();
  float get_direction();
  float get_rain();

private:
  SFEWeatherMeterKit weatherMeterKit;
};
#endif // !__WEATHER_STATION_H_
