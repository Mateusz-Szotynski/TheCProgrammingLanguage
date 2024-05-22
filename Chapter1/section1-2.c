#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */

int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;          /*lower limit of temperature table*/
    upper = 300;        /* upper limit*/
    step = 20;         /* step size*/

    fahr = lower;
    printf("Fahrenheit\tCelsius\n");
    while (fahr <= upper) 
    {
        celsius = (5.0 / 9.0) * (fahr-32.0);
        printf("%10.0f\t%7.1f\n", fahr, celsius);
        fahr += step;
    }
    celsius = lower;
    printf("Celsius\tFahrenheit\n");
    while (celsius <= upper)
    {
        fahr = (9.0 / 5.0 * celsius) - 32;
        printf("%7.0f\t%10.1f\n", celsius, fahr);
        celsius += step;
    }
}