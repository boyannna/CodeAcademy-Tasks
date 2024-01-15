#include<stdio.h>

int main() {

	const int con = 21;
	int number;
	printf("Write a number:");
	scanf_s("%d", &number);
	if (number == con) {
		printf("You win");
	}
	else {
		printf("Try again");
	}

	return 0;
}