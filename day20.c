#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[100];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int prefix_sum = 0;
    int count = 0;

    int freq[1000] = {0}; // simple hashmap (range-based)
    freq[0] = 1; // important

    for(int i = 0; i < n; i++) {
        prefix_sum += arr[i];

        if(freq[prefix_sum] > 0) {
            count += freq[prefix_sum];
        }

        freq[prefix_sum]++;
    }

    printf("%d", count);

    return 0;
}