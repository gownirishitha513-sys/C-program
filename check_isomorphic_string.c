#include <stdio.h>
#include <string.h>
int main() {
char s1[100], s2[100];
int map1[256], map2[256];
for(int i = 0; i < 256; i++) {
map1[i] = -1;
map2[i] = -1;
}
printf("Enter first string: ");
scanf("%s", s1);
printf("Enter second string: ");
scanf("%s", s2);
if(strlen(s1) != strlen(s2)) {
printf("Not Isomorphic\n");
return 0;
}
for(int i = 0; s1[i]; i++) {
if(map1[(unsigned char)s1[i]] == -1 &&
map2[(unsigned char)s2[i]] == -1) {
map1[(unsigned char)s1[i]] = s2[i];
map2[(unsigned char)s2[i]] = s1[i];
}
else if(map1[(unsigned char)s1[i]] != s2[i]) {
printf("Not Isomorphic\n");
return 0;
}
}
printf("Isomorphic\n");
return 0;
}