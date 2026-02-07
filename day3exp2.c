#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int totalSum = n * (n + 1) / 2;

   
    int missing = totalSum - sum;

  
    printf("%d", missing);

    return 0;
}
