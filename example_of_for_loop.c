#include <stdio.h>

int main(void) {
    int n;
    printf("Enter the number: ");
    if (scanf("%d", &n) != 1) return 0;
    int sum = 0;
    for (int i = 1; i <= n; ++i) sum += i;
    printf("The sum of the numbers is %d\n", sum);

    for (int i = n; i >= 1; --i) printf("%d\n", i);
    return 0;
}