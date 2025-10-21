#include <stdio.h>

int count_odd(const int arr[], int n) {
    int c = 0;
    for (int i = 0; i < n; ++i) if (arr[i] % 2 != 0) ++c;
    return c;
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0 || n > 1000) return 1;
    int arr[1000];
    for (int i = 0; i < n; ++i) if (scanf("%d", &arr[i]) != 1) return 1;
    printf("%d\n", count_odd(arr, n));
    return 0;
}
