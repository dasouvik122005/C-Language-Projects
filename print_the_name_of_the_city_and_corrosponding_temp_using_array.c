#include <stdio.h>

int main(void) {
    int n;
    printf("Enter the number of cities: ");
    if (scanf("%d", &n) != 1) return 0;
    char city[100];
    float temp;
    for (int i = 0; i < n; ++i) {
        printf("Enter the name of city %d: ", i + 1);
        scanf("%99s", city);
        printf("Enter the temperature of %s (C): ", city);
        if (scanf("%f", &temp) != 1) return 0;
        printf("%s: %.2f C\n", city, temp);
    }
    return 0;
}