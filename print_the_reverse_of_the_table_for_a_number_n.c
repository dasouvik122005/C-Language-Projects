#include <stdio.h>

int main(void) {
    int n;
    printf("Enter the number: ");
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 10; i >= 1; --i) printf("%d x %d = %d\n", n, i, n * i);
    return 0;
}