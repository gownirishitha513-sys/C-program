#include <stdio.h>
float areaCircle(float r);
int main()
{
float radius, area;
printf("Enter the radius: ");
scanf("%f", &radius);
area = areaCircle(radius);
printf("Area of Circle = %.2f\n", area);
return 0;
}
float areaCircle(float r)
{
return 3.14 * r * r;
}