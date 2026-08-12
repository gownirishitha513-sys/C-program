#include <stdio.h>

int main() {
    int n, k;
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    int freq[100] = {0};
    int left = 0;
    int maxLength = 0;

    for (int right = 0; right < n; right++) {

        freq[arr[right]]++;

        while (freq[arr[right]] > k) {
            freq[arr[left]]--;
            left++;
        }

        int length = right - left + 1;

        if (length > maxLength) {
            maxLength = length;
        }
    }

    printf("Length of longest subarray = %d\n", maxLength);

    return 0;
}