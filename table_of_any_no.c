#include <stdio.h>

void table(int n);
int sum(int x, int y) { return x + y; }

int main(void) {
    int n;
    printf("Enter the number: ");
    if (scanf("%d", &n) != 1) return 0;
    table(n);
    return 0;
}

void table(int n) {
    for (int i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}
