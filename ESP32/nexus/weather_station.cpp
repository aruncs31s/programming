#include "weather_station.h"

void weatherStation::init() { 
  // weatherMeterKit(WIND_DIRECTION_PIN, WIND_SPEED_PIN,
                                    //  RAINFALL_PIN)
  weatherMeterKit.begin(); }
float weatherStation::get_direction() {
  return weatherMeterKit.getWindDirection();
}
float weatherStation::get_speed() { return weatherMeterKit.getWindSpeed(); }
float weatherStation::get_rain() { return weatherMeterKit.getTotalRainfall(); }
