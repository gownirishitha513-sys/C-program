#include <stdio.h>
#include <string.h>
int main() {
char str[100], sub[50];
int i, j, count = 0;
printf("Enter main string: ");
fgets(str, sizeof(str), stdin);
str[strcspn(str, "\n")] = '\0';
printf("Enter substring: ");
fgets(sub, sizeof(sub), stdin);
sub[strcspn(sub, "\n")] = '\0';
int len1 = strlen(str);
int len2 = strlen(sub);
for(i = 0; i <= len1 - len2; i++) {
for(j = 0; j < len2; j++) {
if(str[i + j] != sub[j])
break;}
if(j == len2)
count++;
}
printf("Occurrences of substring = %d", count);
return 0;
}