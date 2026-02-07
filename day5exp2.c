#include <stdio.h>

int main() {
    int m, n;
    int nums1[200], nums2[100]; 

    
    scanf("%d %d", &m, &n);

   
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    int i = m - 1;         
    int j = n - 1;        
    int k = m + n - 1;    
    
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }

    for (int idx = 0; idx < m + n; idx++) {
        printf("%d ", nums1[idx]);
    }

    return 0;
}
