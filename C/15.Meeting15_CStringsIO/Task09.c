#include <stdio.h>
#include <string.h>

#define MAX_LEN 64

int main(void) {
    char text[MAX_LEN] = { 0 };
    int len = 0;

    char c = 0;
    while ((c = getchar()) != EOF) {
        text[len++] = c;
    }

    for (int i = len - 1; i >= 0; i--) {
        putchar(text[i]);
    }

    return 0;
}