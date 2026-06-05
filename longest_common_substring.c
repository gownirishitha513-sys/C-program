#include <stdio.h>
#include <string.h>
int main() {
char str1[100], str2[100];
printf("Enter first string: ");
scanf("%s", str1);
printf("Enter second string: ");
scanf("%s", str2);
int m = strlen(str1);
int n = strlen(str2);
int dp[m + 1][n + 1];
int maxLen = 0;
for(int i = 0; i <= m; i++)
dp[i][0] = 0;
for(int j = 0; j <= n; j++)
dp[0][j] = 0;
for(int i = 1; i <= m; i++) {
for(int j = 1; j <= n; j++) {
if(str1[i - 1] == str2[j - 1]) {
dp[i][j] = dp[i - 1][j - 1] + 1;
if(dp[i][j] > maxLen)
maxLen = dp[i][j];
}
else {
dp[i][j] = 0;
}}
}
printf("Length of Longest Common Substring = %d\n", maxLen);
return 0;
}