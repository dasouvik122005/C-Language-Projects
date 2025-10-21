#include <stdio.h>
#include <limits.h>

int main(void) {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n < 2 || n > 1000) {
        fprintf(stderr, "Need at least 2 elements (max 1000).\n");
        return 1;
    }
    int arr[1000];
    for (int i = 0; i < n; ++i) if (scanf("%d", &arr[i]) != 1) return 1;
    long long first = LLONG_MIN, second = LLONG_MIN;
    for (int i = 0; i < n; ++i) {
        long long x = arr[i];
        if (x > first) { second = first; first = x; }
        else if (x < first && x > second) { second = x; }
    }
    if (second == LLONG_MIN) {
        printf("No second largest (all elements equal).\n");
    } else {
        printf("Second largest = %lld\n", second);
    }
    return 0;
}

