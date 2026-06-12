#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char str[100];
int compare(const void *a, const void *b)
{
return strcmp(str + *(int *)a, str + *(int *)b);
}
int main()
{
scanf("%s", str);
int n = strlen(str);
int suffix[n];
for(int i = 0; i < n; i++)
suffix[i] = i;
qsort(suffix, n, sizeof(int), compare);
printf("Suffix Array:\n");
for(int i = 0; i < n; i++)
printf("%d ", suffix[i]);
return 0;
}