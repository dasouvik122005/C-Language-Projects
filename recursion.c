#include <stdio.h>

// recursion examples: sum(1..n), factorial, fibonacci

int sum_n(int n) { return (n <= 1) ? n : n + sum_n(n - 1); }
int factorial(int n) { return (n <= 1) ? 1 : n * factorial(n - 1); }
int fibonacci(int n) { return (n <= 1) ? n : fibonacci(n - 1) + fibonacci(n - 2); }

int main(void) {
    printf("sum_n(5) = %d\n", sum_n(5));
    printf("factorial(5) = %d\n", factorial(5));
    printf("fibonacci(6) = %d\n", fibonacci(6));
    return 0;
}