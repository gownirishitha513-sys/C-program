#include<stdio.h>
#include<string.h>
int main() {
char str[100];
int i, j, max = 0;
char maxChar;
int freq[256] = {0};
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
for(i = 0; str[i] != '\0'; i++) {
freq[(int)str[i]]++;
}
for(i = 0; i < 256; i++) {
if(freq[i] > max && i != '\n') {
max = freq[i];
maxChar = i;
}}
printf("Highest frequency character: %c\n", maxChar);
printf("Frequency: %d\n", max);
return 0;
}