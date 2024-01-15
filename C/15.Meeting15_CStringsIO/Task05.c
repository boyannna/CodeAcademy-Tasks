#include<stdio.h>
#include<string.h>

int main(void) {

	char c = 0;
	char arr[100];
	int i = 0;

	while ((c = getchar()) != EOF) {

		arr[i] = c;
		i++;

		if (c == '\n') {
			if (i > 3) {
				printf("%s", arr);
			}
			i = 0;
		}
	}
	return 0;
}