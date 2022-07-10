#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "sdkconfig.h"
#include "driver/gpio.h"

#define GPIO_LED_NUM 2



void app_main(void)
{
gpio_pad_select_gpio(GPIO_LED_NUM);
gpio_set_direction(GPIO_LED_NUM,GPIO_MODE_OUTPUT);
while (1)
{
    printf("turning off\n");
    gpio_set_level(GPIO_LED_NUM,1);
    vTaskDelay(500/portTICK_PERIOD_MS);
    printf("turning on\n");
    gpio_set_level(GPIO_LED_NUM,1);
    vTaskDelay(500/portTICK_PERIOD_MS);

}

}
