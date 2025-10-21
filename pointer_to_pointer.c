#include <stdio.h>

int main(void) {
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d\n", **pptr);
    return 0;
}

// use * for value, & for address