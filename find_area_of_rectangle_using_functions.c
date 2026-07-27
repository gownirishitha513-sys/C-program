#include <stdio.h>
int areaRectangle(int length, int breadth);
int main()
{
int length, breadth, area;
printf("Enter length and breadth: ");
scanf("%d%d", &length, &breadth);
area = areaRectangle(length, breadth);
printf("Area of Rectangle = %d\n", area);
return 0;
}
int areaRectangle(int length, int breadth)
{
return length * breadth;
}