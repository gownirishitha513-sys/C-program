#include <stdio.h>
#include <string.h>
char *dict[] = {"leet", "code"};
int wordBreak(char str[]) {
int n = strlen(str);
int dp[n + 1];
for(int i = 0; i <= n; i++)
dp[i] = 0;
dp[0] = 1;
for(int i = 1; i <= n; i++) {
for(int j = 0; j < i; j++) {
if(dp[j]) {
char temp[100];
strncpy(temp, str + j, i - j);
temp[i - j] = '\0';
for(int k = 0; k < 2; k++) {
if(strcmp(temp, dict[k]) == 0) {
dp[i] = 1;
}
}
}
}
}
return dp[n];
}
int main() {
char str[] = "leetcode";
if(wordBreak(str))
printf("Yes\n");
else
printf("No\n");
return 0;
}