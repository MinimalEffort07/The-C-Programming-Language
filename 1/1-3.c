/*
 * Print Fahrenheit-Celsius Table
 *
 * Modify the temperature conversion program to print a heading above the table.
 */

#include<stdio.h>

int main()
{
    float fahr, celsius, upper, step;

    fahr = 0;
    upper = 300;
    step = 20;

    puts("Fahrenheit - Celsius Conversion Table");

    while(fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);   
        printf("%0.2f Fahrenheit = %0.2f Celsius\n", fahr, celsius);
        fahr += step;
    }
}
