
/*
 * Date : 2024-09-11
 * Time : 00:17
 */

#include "battery_monitor.h"

float BatteryMonitor::get_voltage(int adc_pin) {
  adc_value = analogRead(adc_pin) + ADC_OFFSET;
  adc_voltage = (VREF * adc_value) / 4095;

  actual_voltage = (adc_voltage / RESISTOR_RATIO);
  return actual_voltage;
}
int BatteryMonitor::get_adc_value() {
  // Returns the adc_value measured from adc pin
  return adc_value;
}
float BatteryMonitor::get_adc_voltage() {
  // returns voltage across the adc_pin
  return adc_voltage;
}
