#include<stdio.h>
int main() {
char str[1000];
int i;
int lines = 0, spaces = 0, tabs = 0;
printf("Enter text:\n");
fgets(str, sizeof(str), stdin);
for(i = 0; str[i] != '\0'; i++) {
if(str[i] == ' ') {
spaces++;
}
else if(str[i] == '\t') {
tabs++;
}
else if(str[i] == '\n') {
lines++;
}
}
printf("Number of lines  : %d\n", lines);
printf("Number of spaces : %d\n", spaces);
printf("Number of tabs   : %d\n", tabs);
return 0;
}