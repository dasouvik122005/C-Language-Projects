#include <stdio.h>

void storetable(int arr[][10], int row, int m, int number) {
    for (int i = 0; i < m; ++i) arr[row][i] = number * (i + 1);
}

int main(void) {
    int table[2][10];
    storetable(table, 0, 10, 2);
    storetable(table, 1, 10, 3);

    for (int r = 0; r < 2; ++r) {
        for (int c = 0; c < 10; ++c) printf("%d\t", table[r][c]);
        printf("\n");
    }
    return 0;
}