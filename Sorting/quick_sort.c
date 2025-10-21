#include <stdio.h>

static void swap(int* a, int* b) { int t = *a; *a = *b; *b = t; }

static int partition(int a[], int l, int r) {
    int pivot = a[r];
    int i = l - 1;
    for (int j = l; j < r; ++j) {
        if (a[j] <= pivot) { ++i; swap(&a[i], &a[j]); }
    }
    swap(&a[i + 1], &a[r]);
    return i + 1;
}

static void quickSortRec(int a[], int l, int r) {
    if (l < r) {
        int p = partition(a, l, r);
        quickSortRec(a, l, p - 1);
        quickSortRec(a, p + 1, r);
    }
}

void quickSort(int a[], int n) { if (n > 1) quickSortRec(a, 0, n - 1); }

int main(void) {
    int n; if (scanf("%d", &n) != 1 || n <= 0 || n > 100000) return 1;
    int a[100000];
    for (int i = 0; i < n; ++i) if (scanf("%d", &a[i]) != 1) return 1;
    quickSort(a, n);
    for (int i = 0; i < n; ++i) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
