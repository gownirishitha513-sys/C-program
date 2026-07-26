#include <stdio.h>
int smallest(int arr[], int n)
{
int i, min = arr[0];
for (i = 1; i < n; i++)
{
if (arr[i] < min)
min = arr[i];
}
return min;
}
int main()
{
int arr[100], n, i;
printf("Enter the number of elements: ");
scanf("%d", &n);
printf("Enter the array elements:\n");
for (i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
}
printf("Smallest element = %d\n", smallest(arr, n));
return 0;
}