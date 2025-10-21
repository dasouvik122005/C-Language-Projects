#include <stdio.h>

int main(void) {
    int n;
    do {
        printf("Enter a number (enter a multiple of 7 to stop): ");
        if (scanf("%d", &n) != 1) return 0;
    } while (n % 7 != 0);
    printf("Stopped after multiple of 7: %d\n", n);
    return 0;
}