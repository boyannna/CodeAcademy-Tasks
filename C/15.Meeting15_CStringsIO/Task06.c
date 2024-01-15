#include <stdio.h>
#include <ctype.h>

int main(void) {

    char c = 0;
    int wordCount = 0;
    int wordLength = 0;
    int totalLength = 0;

    while ((c = getchar()) != EOF) 
    {
        if (isalpha(c)) {
            wordLength++;
        }
        else if (wordLength > 0) {
            wordCount++;
            totalLength += wordLength;
            wordLength = 0;
        }
    }

    if (wordLength > 0) {
        wordCount++;
        totalLength += wordLength;
    }

    printf("Average word length is: %.2f\n", (float)totalLength / wordCount);

    return 0;
}