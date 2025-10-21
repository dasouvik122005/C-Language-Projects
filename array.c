#include <stdio.h>

void printnumbers(const int arr[], int n) {
    for (int i = 0; i < n; ++i) printf("%d\t", arr[i]);
    printf("\n");
}

int main(void) {
    int arr[] = {1, 2, 3, 4, 5, 6};
    printnumbers(arr, (int)(sizeof(arr) / sizeof(arr[0])));
    return 0;
}
