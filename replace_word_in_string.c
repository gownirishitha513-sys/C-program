#include <stdio.h>
#include <string.h>
int main() {
char str[200], oldWord[50], newWord[50];
char result[200];
int i, j, k, lenOld, found;
printf("Enter sentence: ");
fgets(str, sizeof(str), stdin);
str[strcspn(str, "\n")] = '\0';
printf("Enter word to replace: ");
fgets(oldWord, sizeof(oldWord), stdin);
oldWord[strcspn(oldWord, "\n")] = '\0';
printf("Enter new word: ");
fgets(newWord, sizeof(newWord), stdin);
newWord[strcspn(newWord, "\n")] = '\0';
lenOld = strlen(oldWord);
i = j = 0;
while(str[i] != '\0') {
found = 1;
for(k = 0; k < lenOld; k++) {
if(str[i + k] != oldWord[k]) {
found = 0;
break;
}
}
if(found) {
for(k = 0; newWord[k] != '\0'; k++) {
result[j++] = newWord[k];
}
i += lenOld;
} else {
result[j++] = str[i++];
}
}
result[j] = '\0';
printf("Updated string: %s\n", result);
return 0;
}