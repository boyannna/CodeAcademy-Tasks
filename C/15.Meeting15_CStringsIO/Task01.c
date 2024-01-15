#include<stdio.h>

int isPunctuationMark(const char c);

int main(void) {

	char c = 0;
	int charCounter = -1;
	int letterCounter = 0;
	int punctuationCounter = 0;

	while ((c = getchar()) != EOF) {

		if (c != ' ') {
			charCounter++;
		}
		if (c >= 'a' && c <= 'z') {
			letterCounter++;
		}
		if (isPunctuationMark(c)) {
			punctuationCounter++;
		}
	}

	printf("The number of all characters is %d\n", charCounter);
	printf("The number of all letters is %d\n", letterCounter);
	printf("The number of all punctuation marks is %d\n", punctuationCounter);

	return 0;

}

int isPunctuationMark(const char c) {
	if (c == '.' || c == ',' || c == '!' || c == '?' || c == ':' || c == ';' || c == '"' || c == '-') {
		return 1;
	}
	else {
		return 0;
	}
}