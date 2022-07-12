#include <stdio.h>
#include "esp_system.h"
#include <esp_log.h>
#include <freertos/FreeRTOS.h>
#include "freertos/task.h"

#include "oled.h"
#include "fonts.h"




void app_main()
{
unsigned int cnt=0;
oled_init();
oled_show_str(0,0, "HX ESP32 I2C", &Font_7x10, 1);
oled_show_str(0,15, "oled example", &Font_7x10, 1);
oled_show_str(0,30, "QQ:671139854", &Font_7x10, 1);
oled_show_str(0,45, "All On And Clear",&Font_7x10,1);
vTaskDelay(10000 / portTICK_PERIOD_MS);
while(1)
{
cnt++;
oled_claer();//清屏
vTaskDelay(10 / portTICK_PERIOD_MS);
oled_all_on();//全显
vTaskDelay(10 / portTICK_PERIOD_MS);
ESP_LOGI("OLED", "cnt = %d \r\n", cnt);
}
}