#include <stdio.h>
#include <string.h>
void combinations(char str[], int n) {
int i, j, k;
for (i = 1; i <= n; i++) {
for (j = 0; j <= n - i; j++) {
for (k = j; k < j + i; k++) {
printf("%c", str[k]);
}
printf("\n");
}
}
}
int main() {
char str[100];
printf("Enter a string: ");
scanf("%s", str);
int n = strlen(str);
printf("String combinations are:\n");
combinations(str, n);
return 0;
}