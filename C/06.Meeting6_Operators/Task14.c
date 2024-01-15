//”пражнение 14. Relational operators

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	
	int x = 0;
	int y = 0;
	printf("Please input x: ");
	scanf_s("%d", &x);
	printf("Please input y: ");
	scanf_s("%d", &y);

	if (x == y) {
		printf("%d and %d are equal\n", x, y);
	}
	else {
		printf("%d and %d are not equal\n", x, y);
	}
	if (x > y) {
		printf("%d is greater than %d\n", x, y);
	}

	return 0;

} 