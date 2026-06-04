#include <stdio.h>
#include <string.h>
int main() {
char str[100];
printf("Enter a sentence: ");
fgets(str, sizeof(str), stdin);
char *token = strtok(str, " \n");
printf("Words are:\n");
while(token != NULL) {
printf("%s\n", token);
token = strtok(NULL, " \n"#include <stdio.h>
#include <string.h>
int main() {
char str[100];
int start = 0, maxLen = 1;
printf("Enter string: ");
scanf("%s", str);
int n = strlen(str);
for(int i = 0; i < n; i++) {
int l = i, r = i;
while(l >= 0 && r < n && str[l] == str[r]) {
if(r - l + 1 > maxLen) {
start = l;
maxLen = r - l + 1;
}
l--;
r++;
}
l = i;
r = i + 1;
while(l >= 0 && r < n && str[l] == str[r]) {
if(r - l + 1 > maxLen) {
start = l;
maxLen = r - l + 1;
}
l--;
r++;
}
}
printf("Longest Palindromic Substring: ");
for(int i = start; i < start + maxLen; i++)
printf("%c", str[i]);
return 0;
}