#include <stdio.h>
#include <string.h>
int max(int a, int b) {
return (a > b) ? a : b;
}
int minInsertions(char str[]) {
int n = strlen(str);
int dp[n][n];
for(int i = 0; i < n; i++)
dp[i][i] = 1;
for(int len = 2; len <= n; len++) {
for(int i = 0; i <= n - len; i++) {
int j = i + len - 1;
if(str[i] == str[j])
dp[i][j] = (len == 2) ? 2 : dp[i+1][j-1] + 2;
else
dp[i][j] = max(dp[i+1][j], dp[i][j-1]);
}
}
return n - dp[0][n-1];
}
int main() {
char str[100];
scanf("%s", str);
printf("Minimum Insertions = %d\n", minInsertions(str));
return 0;
}
