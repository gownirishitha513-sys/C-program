#include<stdio.h>
#include<string.h>
int main() {
char str[100], sub[50];
int i, j, k, found;
printf("Enter main string: ");
fgets(str, sizeof(str), stdin);
str[strcspn(str, "\n")] = '\0';
printf("Enter substring to delete: ");
fgets(sub, sizeof(sub), stdin);
sub[strcspn(sub, "\n")] = '\0';
for(i = 0; str[i] != '\0'; i++) {
found = 1;
for(j = 0; sub[j] != '\0'; j++) {
if(str[i + j] != sub[j]) {
found = 0;
break;
}
}
if(found) {
for(k = i; str[k + strlen(sub)] != '\0'; k++) {
str[k] = str[k + strlen(sub)];
}
str[k] = '\0';
i--;
}
}
printf("String after deleting substring: %s", str);
return 0;
}