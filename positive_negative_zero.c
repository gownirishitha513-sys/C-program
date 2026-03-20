#include<stdio.h>
int main()
{
int num;
printf("enter number");
scanf("%d",&num);
if(num>0)
printf("postive number");
else if(num<0)
printf ("negative number");
else 
printf("zero");
return 0;
}