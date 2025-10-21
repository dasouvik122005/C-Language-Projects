#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char *filename = "sample_text.txt";
    // Write to file
    FILE *f = fopen(filename, "w");
    if (!f) { perror("fopen write"); return 1; }
    fprintf(f, "Hello, file!\nThis is a sample text.\n");
    fprintf(f, "Numbers: ");
    for (int i = 1; i <= 5; ++i) fprintf(f, "%d ", i);
    fprintf(f, "\n");
    fclose(f);

    // Read back
    f = fopen(filename, "r");
    if (!f) { perror("fopen read"); return 1; }
    printf("Contents of %s:\n", filename);
    int c;
    while ((c = fgetc(f)) != EOF) putchar(c);
    fclose(f);
    return 0;
}
