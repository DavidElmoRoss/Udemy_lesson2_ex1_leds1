/*
    Title:  Program to Flash the RED LED on/off every second
    Author: Your NAME, STUDENT ID, COURSE CODE, Lab Section
    Date:   Today's Date
    Description:    This program will turn the RED LED on and
                    off every 1 second
*/

#include "mbed.h"                   // include mbed.h library

int main()
{
    // Initialise the digital pin LED1 as an output
    DigitalOut led(LED1);            // connect led to the RED LED

    for(;;)
     {
        led = 1;                    // turn off RED LED
        wait_ms(500);               // wait 500 ms
        led = 0;                    // turn on RED LED
       ThisThread::sleep_for(500);  // sleep for 500 ms
    }
}
