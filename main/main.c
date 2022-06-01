//#include <stdio.h>
//
// void app_main(void)
//{
//
//}

#include <string.h>
#include <stdio.h>
#include "sdkconfig.h"
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"
#include "driver/adc.h"
#include "esp_timer.h"
#include <rom/ets_sys.h>
#include "freertos/task.h"

int n=0;

///////////////////////////////////////////////////////////////////////////////
void app_main()
{
    while (1)
    {
        printf("\nStart  %d \n", n);
        for (int i = 0; i < 4; i++)
        {
            printf("%d ", i);
        }
        n++;
        vTaskDelay(10 * portTICK_PERIOD_MS); // period approximatelly 1 second 
    }

    // printf("START ");
    // // for(int i=0; i< 400; i++){
    // //     printf("%d ", i);
    // // }
    // vTaskDelay( 1 ); // actually 150 ms period, why??
    
}
