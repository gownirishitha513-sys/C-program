#include<stdio.h>
#include<string.h>
int main() {
char str[100];
int i, min;
char minChar;
int freq[256] = {0};
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
for(i = 0; str[i] != '\0'; i++) {
if(str[i] != '\n') {
freq[(int)str[i]]++;}}
for(i = 0; i < 256; i++) {
if(freq[i] > 0) {
min = freq[i];
minChar = i;
break;
}}
for(i = 0; i < 256; i++) {
if(freq[i] > 0 && freq[i] < min) {
min = freq[i];
minChar = i;
}}
printf("Lowest frequency character: %c\n", minChar);
printf("Frequency: %d\n", min);
return 0;
}