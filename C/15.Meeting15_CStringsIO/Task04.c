#include<stdio.h>

int main(void) {

	char c = 0;

	while ((c = getchar()) != EOF) {

		if (c >= 'A' && c <= 'Z') {
			putchar(c);
		}
		if (c >= 'a' && c <= 'z') {
			putchar(c);
		}
		if (c >= '0' && c <= '9') {
			putchar(c);
		}
	}

	return 0;

}