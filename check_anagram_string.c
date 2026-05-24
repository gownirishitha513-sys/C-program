#include<stdio.h>
#include <string.h>
int main() {
char str1[100], str2[100];
int i, j, len1, len2;
int found, isAnagram = 1;
printf("Enter first string: ");
scanf("%s", str1);
printf("Enter second string: ");
scanf("%s", str2);
len1 = strlen(str1);
len2 = strlen(str2);
if (len1 != len2) {
isAnagram = 0;
} else {
for (i = 0; i < len1; i++) {
found = 0;
for (j = 0; j < len2; j++) {
if (str1[i] == str2[j]) {
found = 1;
str2[j] = '*';
break;}}
if (found == 0) {
isAnagram = 0;
break;}}}
if (isAnagram)
printf("Strings are anagrams");
else
printf("Strings are not anagrams");
return 0;
}