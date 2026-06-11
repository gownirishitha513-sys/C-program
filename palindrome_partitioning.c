#include <stdio.h>
#include <string.h>
int isPalindrome(char str[], int i, int j) {
while(i < j) {
if(str[i] != str[j])
return 0;
i++;
j--;
}
return 1;
}
int min(int a, int b) {
return (a < b) ? a : b;
}
int main() {
char str[] = "aab";
int n = strlen(str);
int cut[n];
for(int i = 0; i < n; i++) {
if(isPalindrome(str, 0, i))
cut[i] = 0;
else {
cut[i] = i;
for(int j = 0; j < i; j++) {
if(isPalindrome(str, j + 1, i))
cut[i] = min(cut[i], cut[j] + 1);
}
}
}
printf("Minimum cuts = %d\n", cut[n - 1]);
return 0;
}