#include <stdio.h>

// 1) call by value : we pass the value of variable as argument
// 2) call by reference : we pass the address of variable as argument

void square(int n);
void _square(int *n);

int main(void) {
    int number = 4;
    square(number);
    printf("number = %d\n", number);

    _square(&number);
    printf("number = %d\n", number);

    return 0;
}

// call by value
void square(int n) {
    n = n * n;
    printf("square = %d\n", n);
}

// call by reference
void _square(int *n) {
    *n = (*n) * (*n); // 4 * 4
    printf("_square = %d\n", *n);
}
