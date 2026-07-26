#include <stdio.h>
int largest(int arr[], int n)
{
int i, max = arr[0];
for (i = 1; i < n; i++)
{
if (arr[i] > max)
max = arr[i];
}
return max;
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
printf("Largest element = %d\n", largest(arr, n));
return 0;
}