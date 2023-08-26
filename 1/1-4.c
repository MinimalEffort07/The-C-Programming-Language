/*
 * Print Celsius-Fahrenheit Table
 *
 * Write a program to print the corresponding Celsius to Fahrenheit table.
 */

#include<stdio.h>

int main()
{
    float fahr, celsius, upper, step;

    celsius = 0;
    upper = 300;
    step = 20;

    puts("Celsius - Fahrenheit Conversion Table");

    while(celsius <= upper) {
        fahr = celsius * (9.0/5.0) + 32.0;   

        printf("%0.2f Celsius = %0.2f Fahrenheit\n", celsius, fahr);
        celsius += step;
    }
}
