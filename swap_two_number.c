#include <stdio.h>

void printaddress(int n);
void _printaddress(int *n);

int main(void) {
    int n = 4;
    printf("address in main: %p\n", (void *)&n);
    printaddress(n);
    _printaddress(&n);
    return 0;
}

// call by value: prints address of local copy
void printaddress(int n) { printf("address in printaddress: %p\n", (void *)&n); }

// call by reference: prints the address passed
void _printaddress(int *n) { printf("address in _printaddress: %p\n", (void *)n); }