#include <stdio.h>
#include <string.h>
int main() {
char str[100];
printf("Enter a string: ");
scanf("%s", str);
int last[256];
int n = strlen(str);
for(int i = 0; i < 256; i++)
last[i] = -1;
int start = 0, maxLen = 0;
for(int i = 0; i < n; i++) {
if(last[(unsigned char)str[i]] >= start)
start = last[(unsigned char)str[i]] + 1;
last[(unsigned char)str[i]] = i;
int len = i - start + 1;
if(len > maxLen)
maxLen = len;
}
printf("Length of Longest Substring Without Repeating Characters = %d\n", maxLen);
return 0;
}