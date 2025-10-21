#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int lo = 0, hi = n - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == target) return mid; // 0-based index
        else if (arr[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    return -1;
}

int main(void) {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 1000) {
        fprintf(stderr, "Invalid n (1..1000).\n");
        return 1;
    }
    int arr[1000];
    printf("Enter %d sorted integers (ascending):\n", n);
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &arr[i]) != 1) {
            fprintf(stderr, "Invalid input.\n");
            return 1;
        }
    }
    int target;
    printf("Enter target to search: ");
    if (scanf("%d", &target) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }
    int idx = binarySearch(arr, n, target);
    if (idx >= 0) printf("Found at index %d (0-based).\n", idx);
    else printf("Not found.\n");
    return 0;
}
