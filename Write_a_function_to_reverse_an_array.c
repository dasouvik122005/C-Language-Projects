#include <stdio.h>

void reverse(int arr[], int n) {
    for (int i = 0; i < n / 2; ++i) {
        int tmp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = tmp;
    }
}

void printarr(const int arr[], int n) {
    for (int i = 0; i < n; ++i) printf("%d ", arr[i]);
    printf("\n");
}

int main(void) {
    int arr[] = {1, 2, 3, 4, 5};
    int n = (int)(sizeof(arr) / sizeof(arr[0]));
    reverse(arr, n);
    printarr(arr, n);
    return 0;
}