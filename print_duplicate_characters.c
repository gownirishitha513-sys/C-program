#include<stdio.h>
#include<string.h>
int main() {
char str[100];
int i, j;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
str[strcspn(str, "\n")] = '\0';
printf("Duplicate characters are:\n");
for(i = 0; str[i] != '\0'; i++) {
for(j = i + 1; str[j] != '\0'; j++) {
if(str[i] == str[j]) {
printf("%c\n", str[i]);
break;}}}
return 0;}