#include <stdio.h>
int main() {
int num, rev = 0, temp;
printf("Enter number: ");
scanf("%d", &num);
temp = num;  // store original number
while(num > 0) {
rev = rev * 10 + num % 10;
num = num / 10;
}
if(temp == rev)
printf("Palindrome");
else
printf("Not Palindrome");
return 0;
}