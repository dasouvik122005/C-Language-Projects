#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 1;
    if (n > 93) n = 93; // limit to prevent unsigned long long overflow
    unsigned long long *fib = malloc(sizeof(unsigned long long) * (size_t)n);
    if (!fib) return 1;
    fib[0] = 0ULL;
    if (n > 1) fib[1] = 1ULL;
    for (int i = 2; i < n; ++i) fib[i] = fib[i - 1] + fib[i - 2];
    for (int i = 0; i < n; ++i) printf("%llu ", fib[i]);
    printf("\n");
    free(fib);
    return 0;
}