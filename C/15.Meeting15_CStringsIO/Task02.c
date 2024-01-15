#include<stdio.h>

int main(void) {

	char c = 0;
	int spaceCounter = 0;
	int rowsCounter = 0;
	int tabCounter = 0;

	while ((c = getchar()) != EOF) {

		if (c == ' ') {
			spaceCounter++;
		}
		if (c == '\n') {
			rowsCounter++;
		}
		if (c == '\t') {
			tabCounter++;
		}
	}

	printf("The number of all rows is %d\n", rowsCounter);
	printf("The number of all spaces is %d\n", spaceCounter);
	printf("The number of all tabs is %d\n", tabCounter);

	return 0;

}