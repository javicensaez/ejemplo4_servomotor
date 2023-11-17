/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#define periodo 1000


#define WAIT_TIME_MS 5 
PwmOut servomotor(D5); //Salida PWM concentada el el servomotor, Mirar si el pin es compatible con PWM
AnalogIn pot(A0); //Potenciometro conectado en la entrada analogica A0


int main()
{
    
    servomotor.period_ms(20);
    float pulsous=0;

    while (true) {
        servomotor.pulsewidth_us(pot*1000+1000);
        thread_sleep_for(10);
    }
}
