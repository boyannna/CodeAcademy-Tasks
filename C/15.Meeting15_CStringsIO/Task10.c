#include <stdio.h>
#include <string.h>

#define MAX_LEN 64

int main(void) {
    char text[MAX_LEN][MAX_LEN] = { 0 };
    int counter = 0;
    char c = 0;
    int col = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            counter++;
            col = 0;
        }
        else {
            text[counter][col++] = c;
        }
    }

    for (int i = counter; i >= 0; i--) {
        printf("%s\n", text[i]);
    }

    return 0;
}