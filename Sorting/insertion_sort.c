#include <stdio.h>

void insertionSort(int a[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            --j;
        }
        a[j + 1] = key;
    }
}

int main(void) {
    int n; if (scanf("%d", &n) != 1 || n <= 0 || n > 1000) return 1;
    int a[1000];
    for (int i = 0; i < n; ++i) if (scanf("%d", &a[i]) != 1) return 1;
    insertionSort(a, n);
    for (int i = 0; i < n; ++i) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
