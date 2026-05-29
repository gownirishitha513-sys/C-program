#include <stdio.h>
#include <string.h>
int main() {
char str[200], word[50], shortest[50];
int i = 0, j = 0, min = 1000, len;
printf("Enter a sentence: ");
fgets(str, sizeof(str), stdin);
while(1) {
if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
word[j++] = str[i];
}
else {
word[j] = '\0';
len = j;
if(len > 0 && len < min) {
min = len;
strcpy(shortest, word);
}
j = 0;
if(str[i] == '\0' || str[i] == '\n')
break;
}
i++;}
printf("Shortest word = %s", shortest);
return 0;
}