#include <stdio.h>
float fahrenheitToCelsius(float f);
int main()
{
float fahrenheit, celsius;
printf("Enter temperature in Fahrenheit: ");
scanf("%f", &fahrenheit);
celsius = fahrenheitToCelsius(fahrenheit);
printf("Temperature in Celsius = %.2f\n", celsius);
return 0;
}
float fahrenheitToCelsius(float f)
{
return (f - 32) * 5 / 9;
}