#include <stdio.h>

int main(void) {
    int n;
    do {
        printf("Enter a number (enter an odd number to stop): ");
        if (scanf("%d", &n) != 1) return 0;
    } while (n % 2 == 0);
    printf("Stopped after odd number: %d\n", n);
    return 0;
}