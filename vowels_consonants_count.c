#include <stdio.h>
#include <ctype.h>

int isVowel(char c) {
    c = (char)tolower((unsigned char)c);
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}

int main(void) {
    char ch;
    long vowels=0, consonants=0, digits=0, spaces=0, others=0;
    printf("Enter text (Ctrl+Z then Enter to end on Windows):\n");
    while ((ch = (char)getchar()) != EOF) {
        if (isalpha((unsigned char)ch)) {
            if (isVowel(ch)) vowels++; else consonants++;
        } else if (isdigit((unsigned char)ch)) digits++;
        else if (ch==' '||ch=='\t'||ch=='\n') spaces++;
        else others++;
    }
    printf("Vowels: %ld\nConsonants: %ld\nDigits: %ld\nWhitespace: %ld\nOthers: %ld\n",
           vowels, consonants, digits, spaces, others);
    return 0;
}
