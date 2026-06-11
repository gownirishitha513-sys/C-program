#include <stdio.h>
#include <string.h>
int main() {
char str[100];
scanf("%s", str);
int n = strlen(str);
char subs[1000][100];
int count = 0;
for(int i = 0; i < n; i++) {
for(int j = 1; j <= n - i; j++) {
char temp[100];
strncpy(temp, str + i, j);
temp[j] = '\0';
int found = 0;
for(int k = 0; k < count; k++) {
if(strcmp(subs[k], temp) == 0) {
found = 1;
break;
}
}
if(!found) {
strcpy(subs[count++], temp);
}
}
}
printf("Distinct Substrings = %d\n", count);
return 0;
}