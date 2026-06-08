#include <stdio.h>
#include <string.h>
#define d 256
#define q 101
void rabinKarp(char text[], char pattern[]) {
int m = strlen(pattern);
int n = strlen(text);
int p = 0, t = 0, h = 1;
int i, j;
for(i = 0; i < m - 1; i++)
h = (h * d) % q;
for(i = 0; i < m; i++) {
p = (d * p + pattern[i]) % q;
t = (d * t + text[i]) % q;
}
for(i = 0; i <= n - m; i++) {
if(p == t) {
for(j = 0; j < m; j++) {
if(text[i + j] != pattern[j])
break;
}
if(j == m)
printf("Pattern found at index %d\n", i);
}
if(i < n - m) {
t = (d * (t - text[i] * h) +
text[i + m]) % q;
if(t < 0)
t += q;
}
}
}
int main() {
char text[100], pattern[100];
printf("Enter text: ");
scanf("%s", text);
printf("Enter pattern: ");
scanf("%s", pattern);
rabinKarp(text, pattern);
return 0;
}