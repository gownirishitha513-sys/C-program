#include <stdio.h>

int main() {
    int a[100], n, i, min, max;
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    min = max = a[0];
    for(i = 1; i < n; i++) {
        if(a[i] < min)
            min = a[i];
        if(a[i] > max)
            max = a[i];
    }

    
    printf("Array after removing minimum and maximum: ");
    for(i = 0; i < n; i++) {
        if(a[i] != min && a[i] != max)
            printf("%d ", a[i]);
    }

    return 0;
}