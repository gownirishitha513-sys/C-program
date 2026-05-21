#include <stdio.h>
#include <string.h>
int main() {
char str[100], temp;
int i, j, length;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
length = strlen(str);
for(i = 0; i < length - 1; i++) {
for(j = i + 1; j < length; j++) {
if(str[i] > str[j]) {
temp = str[i];
str[i] = str[j];
str[j] = temp;
}
}
}
printf("Sorted string: %s", str);
return 0;
}