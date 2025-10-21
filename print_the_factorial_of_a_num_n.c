#include <stdio.h>

int main(void) {
    int n, fact = 1;
    printf("Enter the number: ");
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 1; i <= n; ++i) fact *= i;
    printf("The factorial of %d is %d\n", n, fact);
    return 0;
}