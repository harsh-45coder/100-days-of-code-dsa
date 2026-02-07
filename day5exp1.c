#include <stdio.h>

int main() {
    int p, q;
    int log1[100], log2[100], merged[200];

    scanf("%d", &p);
    for (int i = 0; i < p; i++) {
        scanf("%d", &log1[i]);
    }

    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        scanf("%d", &log2[i]);
    }

    int i = 0, j = 0, k = 0;

    while (i < p && j < q) {
        if (log1[i] <= log2[j]) {
            merged[k++] = log1[i++];
        } else {
            merged[k++] = log2[j++];
        }
    }

    while (i < p) {
        merged[k++] = log1[i++];
    }
    while (j < q) {
        merged[k++] = log2[j++];
    }

    for (int m = 0; m < k; m++) {
        printf("%d ", merged[m]);
    }

    return 0;
}
