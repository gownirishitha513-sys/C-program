#include <stdio.h>
#include <string.h>
int main() {
char str[100];
printf("Enter a sentence: ");
fgets(str, sizeof(str), stdin);
char *token = strtok(str, " \n");
printf("Words are:\n");
while(token != NULL) {
printf("%s\n", token);
token = strtok(NULL, " \n");
}
return 0;
}