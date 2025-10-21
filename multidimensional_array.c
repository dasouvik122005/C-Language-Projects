#include <stdio.h>

int main(void) {
    int marks[2][3] = {{90, 91, 92}, {93, 94, 95}};
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) printf("%d ", marks[i][j]);
        printf("\n");
    }
    return 0;
}