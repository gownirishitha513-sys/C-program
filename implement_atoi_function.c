#include <stdio.h>
int myAtoi(char str[]) {
int i = 0, num = 0, sign = 1;
if(str[0] == '-') {
sign = -1;
i++;
}
while(str[i] != '\0') {
num = num * 10 + (str[i] - '0');
i++;
}
return sign * num;
}
int main() {
char str[100];
scanf("%s", str);
printf("%d\n", myAtoi(str));
return 0;
}
