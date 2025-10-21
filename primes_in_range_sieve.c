#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Print primes up to N. Enter N: ");
    if (scanf("%d", &n) != 1 || n < 2 || n > 1000000) {
        fprintf(stderr, "Enter 2..1000000.\n");
        return 1;
    }
    char *isPrime = (char*)malloc((size_t)n + 1);
    if (!isPrime) { fprintf(stderr, "Memory allocation failed.\n"); return 1; }
    memset(isPrime, 1, (size_t)n + 1);
    isPrime[0] = isPrime[1] = 0;
    for (int p = 2; p * p <= n; ++p) {
        if (isPrime[p]) {
            for (int multiple = p * p; multiple <= n; multiple += p) isPrime[multiple] = 0;
        }
    }
    printf("Primes up to %d:\n", n);
    for (int i = 2; i <= n; ++i) if (isPrime[i]) printf("%d ", i);
    printf("\n");
    free(isPrime);
    return 0;
}

