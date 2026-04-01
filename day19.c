#include <stdio.h>
#include <stdlib.h>

// Function for sorting
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[100];

    // Input
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort array
    qsort(arr, n, sizeof(int), compare);

    int left = 0, right = n - 1;
    int min_sum = arr[0] + arr[1];
    int x = arr[0], y = arr[1];

    while(left < right) {
        int sum = arr[left] + arr[right];

        if(abs(sum) < abs(min_sum)) {
            min_sum = sum;
            x = arr[left];
            y = arr[right];
        }

        if(sum < 0)
            left++;
        else
            right--;
    }

    printf("%d %d", x, y);

    return 0;
}