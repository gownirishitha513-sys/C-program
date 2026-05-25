#include<stdio.h>
#include<string.h>
int main() {
char str[100], sub[50], result[150];
int pos, i, j, k;
printf("Enter main string: ");
fgets(str, sizeof(str), stdin);
str[strcspn(str, "\n")] = '\0';
printf("Enter substring to insert: ");
fgets(sub, sizeof(sub), stdin);
sub[strcspn(sub, "\n")] = '\0';
printf("Enter position to insert: ");
scanf("%d", &pos);
for(i = 0; i < pos; i++) {
result[i] = str[i];
}
for(j = 0; sub[j] != '\0'; j++) {
result[i] = sub[j];
i++;
}
for(k = pos; str[k] != '\0'; k++) {
result[i] = str[k];
i++;
}
result[i] = '\0';
printf("String after insertion: %s", result);
return 0;
}