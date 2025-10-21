#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char s[1024];
    printf("Enter a string: ");
    if (!fgets(s, sizeof(s), stdin)) return 1;
    // remove trailing newline
    size_t len = strlen(s);
    if (len > 0 && s[len-1] == '\n') s[len-1] = '\0';

    int i = 0, j = (int)strlen(s) - 1;
    int isPal = 1;
    while (i < j) {
        while (i < j && !isalnum((unsigned char)s[i])) i++;
        while (i < j && !isalnum((unsigned char)s[j])) j--;
        if (tolower((unsigned char)s[i]) != tolower((unsigned char)s[j])) { isPal = 0; break; }
        i++; j--;
    }
    if (isPal) printf("Palindrome string\n");
    else printf("Not a palindrome string\n");
    return 0;
}
