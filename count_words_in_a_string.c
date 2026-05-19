#include <stdio.h>
int main() {
char str[200];
int i, words = 0;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
for(i = 0; str[i] != '\0'; i++) {
if((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') 
&& str[i + 1] != ' ' 
&& str[i + 1] != '\0'
&& str[i + 1] != '\n') {
words++;
}
}
if(str[0] != '\0' && str[0] != '\n') {
words++;
}
printf("Number of words = %d", words);
return 0;
}