/*
 * Print Celsius-Fahrenheit Table In Reverse Order
 *
 * Modify conversion table from 1-4.c to be printed in reverse order. 
 */

#include<stdio.h>

int main()
{
    float fahr, celsius, lower, step;

    celsius = 300;
    lower = 0;
    step = 20;

    puts("Celsius - Fahrenheit Conversion Table In Reverse Order");

    while(celsius >= lower) {
        fahr = celsius * (9.0/5.0) + 32.0;   

        printf("%0.2f Celsius = %0.2f Fahrenheit\n", celsius, fahr);
        celsius -= step;
    }
}
