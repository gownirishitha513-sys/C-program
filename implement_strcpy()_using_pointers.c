#include <stdio.h>
int main() {
char str1[100], str2[100];
char *src, *dest;
printf("Enter a string: ");
fgets(str1, sizeof(str1), stdin);
src = str1;
dest = str2;
while (*src != '\0') {
*dest = *src;
src++;
dest++;
}
*dest = '\0';
printf("Copied String: %s", str2);
return 0;
}