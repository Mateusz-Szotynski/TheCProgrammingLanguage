#include <stdio.h>

/* Rewrite the temperature conversion program of Section 1.2 to use a function for conversion */

void conversion(int lower, int upper, int step);
double fahrenheitToCelsius(double fahr);
double celsiusToFahrenheit(double celsius);

int main()
{
    conversion(0, 300, 20);
}

void conversion(int lower, int upper, int step)
{
    printf("temp Celsius | Fahrenheit\n");
    for (int i = lower; i <= upper; i += step)
    {
        printf("%3d:  %6.2f | %6.2f\n",i , fahrenheitToCelsius(i), celsiusToFahrenheit(i));
    }
}

double fahrenheitToCelsius(double fahr)
{
    return ((5.0 / 9.0) * (fahr-32.0));
}

double celsiusToFahrenheit(double celsius)
{
    return ((9.0 / 5.0 * celsius) - 32);
}