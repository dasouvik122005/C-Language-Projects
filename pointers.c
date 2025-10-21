#include <stdio.h>

int main(void) {
    int x = 0;
    int *ptr = &x;

    printf("x=%d\n", x);
    printf("*ptr=%d\n", *ptr);

    *ptr += 5;
    printf("x=%d\n", x);
    printf("*ptr=%d\n", *ptr);

    (*ptr)++;
    printf("x=%d\n", x);
    printf("*ptr=%d\n", *ptr);

    return 0;
}
