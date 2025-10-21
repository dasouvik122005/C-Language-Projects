#include <stdio.h>

int sum(int x, int y) { return x + y; }

int main(void) {
    int a, b;
    printf("Enter first number: ");
    if (scanf("%d", &a) != 1) return 0;
    printf("Enter second number: ");
    if (scanf("%d", &b) != 1) return 0;
    int s = sum(a, b);
    printf("sum is : %d\n", s);
    return 0;
}