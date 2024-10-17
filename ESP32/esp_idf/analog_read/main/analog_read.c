/*
 * Source :
 * https://docs.espressif.com/projects/arduino-esp32/en/latest/api/adc.html
 */
#include "esp_adc/adc_cali.h"
#include "esp_adc/adc_cali_scheme.h"
#include "esp_adc/adc_oneshot.h"
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include <stdio.h>
/* #include "freertos/task.h" */
static int adc_raw[1][10];
static int voltage[2][10];

const static char *TAG = "EXAMPLE";
#define EXAMPLE_ADC1_CHAN0 ADC_CHANNEL_4
void app_main(void) {

  adc_oneshot_unit_handle_t adc1_handle;
  adc_oneshot_unit_init_cfg_t init_config1 = {
      .unit_id = ADC_UNIT_1,
      .ulp_mode = ADC_ULP_MODE_DISABLE,
  };
  ESP_ERROR_CHECK(adc_oneshot_new_unit(&init_config1, &adc1_handle));
  adc_oneshot_chan_cfg_t config = {
      .bitwidth = ADC_BITWIDTH_DEFAULT,
      .atten = ADC_ATTEN_DB_12,
  };
  ESP_ERROR_CHECK(
      adc_oneshot_config_channel(adc1_handle, EXAMPLE_ADC1_CHAN0, &config));
  while (1) {
    ESP_ERROR_CHECK(
        adc_oneshot_read(adc1_handle, EXAMPLE_ADC1_CHAN0, &adc_raw[0][0]));
    ESP_LOGI(TAG, "ADC%d Channel[%d] Raw Data: %d", ADC_UNIT_1 + 1,
             EXAMPLE_ADC1_CHAN0, adc_raw[0][0]);
    printf("\n ADC Value = %d", adc_raw[0][0]);

    vTaskDelay(pdMS_TO_TICKS(1000));
  }
}
