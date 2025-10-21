#include <stdio.h>

int main(void) {
    double a, b; char op;
    printf("Enter expression (e.g., 3.5 + 2): ");
    if (scanf("%lf %c %lf", &a, &op, &b) != 3) { fprintf(stderr, "Invalid input.\n"); return 1; }
    switch (op) {
        case '+': printf("%.6g\n", a + b); break;
        case '-': printf("%.6g\n", a - b); break;
        case '*': printf("%.6g\n", a * b); break;
        case '/': if (b == 0) { printf("Division by zero!\n"); } else { printf("%.6g\n", a / b); } break;
        default: printf("Unsupported operator. Use + - * /\n");
    }
    return 0;
}
