#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[100], freq[100];

    // Input
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;   // mark all as unvisited
    }

    // Count frequency
    for(int i = 0; i < n; i++) {
        if(freq[i] == 0) continue;  // already counted

        int count = 1;

        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = 0;  // mark duplicate
            }
        }

        freq[i] = count;
    }

    // Print result
    for(int i = 0; i < n; i++) {
        if(freq[i] != 0) {
            printf("%d:%d\n", arr[i], freq[i]);
        }
    }

    return 0;
}