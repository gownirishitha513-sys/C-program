#include <stdio.h>
float celsiusToFahrenheit(float c);
int main()
{
float celsius, fahrenheit;
printf("Enter temperature in Celsius: ");
scanf("%f", &celsius);
fahrenheit = celsiusToFahrenheit(celsius);
printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);
return 0;
}
float celsiusToFahrenheit(float c)
{
return (c * 9 / 5) + 32;
}