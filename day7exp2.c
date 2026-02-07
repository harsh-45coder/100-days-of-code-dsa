#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("0");
        return 0;
    }
    if (n == 1) {
        printf("1");
        return 0;
    }

    int a = 0, b = 1; // F(0) and F(1)
    int fib;

    for (int i = 2; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }

    printf("%d", fib);

    return 0;
}
