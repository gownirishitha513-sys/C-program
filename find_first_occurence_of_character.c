#include <stdio.h>
int main() {
char str[100], ch;
int i;
printf("Enter a string: ");
scanf("%s", str);
printf("Enter character to find: ");
scanf(" %c", &ch);
for(i = 0; str[i] != '\0'; i++) {
if(str[i] == ch) {
printf("First occurrence of '%c' is at position %d", ch, i + 1);
break;
}
}
if(str[i] == '\0') {
printf("Character not found");
}
return 0;
}