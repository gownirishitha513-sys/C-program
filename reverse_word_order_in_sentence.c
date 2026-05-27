#include<stdio.h>
#include<string.h>
int main() {
char str[100], temp[100];
int i, j = 0, len, end;
printf("Enter sentence: ");
fgets(str, sizeof(str), stdin);
len = strlen(str);
if(str[len - 1] == '\n') {
str[len - 1] = '\0';
len--;
}
for(i = len - 1; i >= 0; i--) {
if(str[i] == ' ') {
end = i + 1;
while(str[end] != ' ' && str[end] != '\0') {
temp[j++] = str[end++];
}
temp[j++] = ' ';
}}
i = 0;
while(str[i] != ' ' && str[i] != '\0') {
temp[j++] = str[i++];
}
temp[j] = '\0';
printf("Reversed word order:\n%s\n", temp);
return 0;
}