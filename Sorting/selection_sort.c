#include <stdio.h>

void selectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < n; ++j) if (a[j] < a[minIdx]) minIdx = j;
        if (minIdx != i) { int t = a[i]; a[i] = a[minIdx]; a[minIdx] = t; }
    }
}

int main(void) {
    int n; if (scanf("%d", &n) != 1 || n <= 0 || n > 1000) return 1;
    int a[1000];
    for (int i = 0; i < n; ++i) if (scanf("%d", &a[i]) != 1) return 1;
    selectionSort(a, n);
    for (int i = 0; i < n; ++i) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
