#include<stdio.h>

int main(void) {

    char c = 0;
    char prevChar = 0;

    while ((c = getchar()) != EOF) {
        if (c != ' ' || prevChar != ' ') {
            putchar(c);
        }
        prevChar = c;
    }

    return 0;
}