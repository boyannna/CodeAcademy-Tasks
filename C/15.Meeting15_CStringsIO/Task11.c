#include <stdio.h>
#include <string.h>

#define MAX_LEN 64

int main(void) {
    char text[MAX_LEN][MAX_LEN] = { 0 };
    int lineCount = 0;

    char c = 0;
    int col = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            lineCount++;
            col = 0;
        }
        else {
            text[lineCount][col++] = c;
        }
    }

    for (int i = 0; i <= lineCount; i++) {
        int len = strlen(text[i]);
        for (int j = len - 1; j >= 0; j--) {
            printf("%c", text[i][j]);
        }
        printf("\n");
    }

    return 0;
}