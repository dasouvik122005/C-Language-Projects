#include <stdio.h>
#include <stdlib.h>

static void merge(int a[], int l, int m, int r, int* tmp) {
    int i = l, j = m + 1, k = l;
    while (i <= m && j <= r) {
        if (a[i] <= a[j]) tmp[k++] = a[i++];
        else tmp[k++] = a[j++];
    }
    while (i <= m) tmp[k++] = a[i++];
    while (j <= r) tmp[k++] = a[j++];
    for (int t = l; t <= r; ++t) a[t] = tmp[t];
}

static void mergeSortRec(int a[], int l, int r, int* tmp) {
    if (l >= r) return;
    int m = l + (r - l) / 2;
    mergeSortRec(a, l, m, tmp);
    mergeSortRec(a, m + 1, r, tmp);
    merge(a, l, m, r, tmp);
}

void mergeSort(int a[], int n) {
    int* tmp = (int*)malloc(sizeof(int) * n);
    if (!tmp) { fprintf(stderr, "malloc failed\n"); exit(1); }
    mergeSortRec(a, 0, n - 1, tmp);
    free(tmp);
}

int main(void) {
    int n; if (scanf("%d", &n) != 1 || n <= 0 || n > 100000) return 1;
    int* a = (int*)malloc(sizeof(int) * n);
    if (!a) return 1;
    for (int i = 0; i < n; ++i) if (scanf("%d", &a[i]) != 1) return 1;
    mergeSort(a, n);
    for (int i = 0; i < n; ++i) printf("%d ", a[i]);
    printf("\n");
    free(a);
    return 0;
}
