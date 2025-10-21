#include <stdio.h>

int linearSearch(const int a[], int n, int target) {
    for (int i = 0; i < n; ++i) if (a[i] == target) return i; // 0-based index
    return -1;
}

int main(void) {
    int n; if (scanf("%d", &n) != 1 || n <= 0 || n > 100000) return 1;
    int a[100000];
    for (int i = 0; i < n; ++i) if (scanf("%d", &a[i]) != 1) return 1;
    int x; if (scanf("%d", &x) != 1) return 1;
    int idx = linearSearch(a, n, x);
    if (idx >= 0) printf("Found at index %d\n", idx);
    else printf("Not found\n");
    return 0;
}
