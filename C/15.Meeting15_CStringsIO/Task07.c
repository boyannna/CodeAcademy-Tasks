#include <stdio.h>

int main(void) {

    char c = 0;

    while ((c = getchar()) != EOF) {

        if (c != ' ' && c != '\n' && c != '\t') {
            putchar(c);
        }
    }

    return 0;
}