#include <stdio.h>

int add(int a, int b) { return a + b; }

int main(void) {
    int x = 10, y = 20;
    printf("sum = %d\n", add(x, y));
    return 0;
}
