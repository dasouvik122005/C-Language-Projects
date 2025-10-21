#include <stdio.h>
#include <math.h>
#include <inttypes.h>

int main(void) {
    int64_t n;
    printf("Enter an integer: ");
    if (scanf("%" SCNd64, &n) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }
    int64_t temp = n;
    if (n < 0) {
        printf("Negative numbers are not considered Armstrong here.\n");
        return 0;
    }
    // count digits
    int digits = (n == 0) ? 1 : 0;
    int64_t t = n;
    while (t > 0) { digits++; t /= 10; }

    int64_t sum = 0;
    t = n;
    while (t > 0) {
        int d = (int)(t % 10);
        sum += (int64_t)llround(pow(d, digits));
        t /= 10;
    }
    if (n == 0) sum = 0; // 0 is Armstrong (0^1 == 0)

    if (sum == temp) printf("%" PRId64 " is an Armstrong number.\n", temp);
    else printf("%" PRId64 " is not an Armstrong number.\n", temp);
    return 0;
}
