#include<stdio.h>
int main(){
char str[100];
printf("enter string");
fgets(str,sizeof(str),stdin);
printf("the string is %s",str);
return 0;
}
