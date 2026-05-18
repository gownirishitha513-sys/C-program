#include<stdio.h>
int main() {
char str[100], ch;
int i, pos = -1;
printf("Enter string: ");
fgets(str, sizeof(str), stdin);
printf("Enter character to find: ");
scanf("%c", &ch);
for(i = 0; str[i] != '\0'; i++) {
if(str[i] == ch) {
pos = i;
}
}
if(pos != -1)
printf("Last occurrence of '%c' is at position %d", ch, pos);
else
printf("Character not found");
return 0;
}
