#include <stdio.h>
int match(char *str, char *pat) {
if(*pat == '\0')
return *str == '\0';
if(*pat == '*')
return match(str, pat + 1) ||
(*str && match(str + 1, pat));
if(*pat == '?' || *pat == *str)
return *str && match(str + 1, pat + 1);
return 0;
}
int main() {
char str[100], pat[100];
printf("Enter string: ");
scanf("%s", str);
printf("Enter pattern: ");
scanf("%s", pat);
if(match(str, pat))
printf("Match\n");
else
printf("Not Match\n");
return 0;
}