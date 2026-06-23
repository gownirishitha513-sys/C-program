#include <stdio.h>
#include <string.h>
int main() {
char str[100];
char *start, *end, temp;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
int len = strlen(str);
if(str[len - 1] == '\n') {
str[len - 1] = '\0';
len--;
}
start = str;
end = str + len - 1;
while(start < end) {
temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}
printf("Reversed String = %s\n", str);
return 0;
}