#include <stdio.h>

void Namaste(void) { printf("Namaste\n"); }
void Bonjour(void) { printf("Bonjour\n"); }

int main(void) {
    char x;
    printf("Enter i for Indian or f for French: ");
    if (scanf(" %c", &x) != 1) return 1;
    if (x == 'i') Namaste();
    else if (x == 'f') Bonjour();
    else printf("Unknown input\n");
    return 0;
}