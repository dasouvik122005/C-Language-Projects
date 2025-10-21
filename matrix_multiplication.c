#include <stdio.h>

int main(void) {
    int r1, c1, r2, c2;
    printf("Enter rows and columns of first matrix (r1 c1): ");
    if (scanf("%d %d", &r1, &c1) != 2) return 1;
    printf("Enter rows and columns of second matrix (r2 c2): ");
    if (scanf("%d %d", &r2, &c2) != 2) return 1;
    if (c1 != r2 || r1 <= 0 || c1 <= 0 || r2 <= 0 || c2 <= 0 || r1 > 20 || c1 > 20 || r2 > 20 || c2 > 20) {
        fprintf(stderr, "Invalid dimensions or incompatible for multiplication (max 20).\n");
        return 1;
    }
    int A[20][20], B[20][20], C[20][20];
    printf("Enter elements of A (%d x %d):\n", r1, c1);
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c1; ++j)
            if (scanf("%d", &A[i][j]) != 1) return 1;
    printf("Enter elements of B (%d x %d):\n", r2, c2);
    for (int i = 0; i < r2; ++i)
        for (int j = 0; j < c2; ++j)
            if (scanf("%d", &B[i][j]) != 1) return 1;
    // multiply
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            long long sum = 0;
            for (int k = 0; k < c1; ++k) sum += (long long)A[i][k] * B[k][j];
            C[i][j] = (int)sum;
        }
    }
    printf("Result (A x B):\n");
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}

