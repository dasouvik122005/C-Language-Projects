#include <stdio.h>
#include <limits.h>
#include <inttypes.h>

int main(void) {
    int64_t n, original, reversed = 0;
    printf("Enter an integer: ");
    if (scanf("%" SCNd64, &n) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }
    if (n < 0) {
        printf("Negative numbers are not considered palindrome here.\n");
        return 0;
    }
    original = n;
    while (n > 0) {
        int digit = (int)(n % 10);
        if (reversed > (INT64_MAX - digit) / 10) {
            fprintf(stderr, "Overflow during reverse.\n");
            return 1;
        }
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    if (original == reversed) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}
