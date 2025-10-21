#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a < 0 ? -a : a;
}

long long lcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    long long g = gcd(a, b);
    return (long long)a / g * (long long)b;
}

int main(void) {
    int a, b;
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }
    int g = gcd(a, b);
    long long l = lcm(a, b);
    printf("GCD(%d, %d) = %d\n", a, b, g);
    printf("LCM(%d, %d) = %lld\n", a, b, l);
    return 0;
}

