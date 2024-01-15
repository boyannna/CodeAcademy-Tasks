#include<stdio.h>

int main() {
	const int num = 15;
	int guessNum = 0;
	printf("Enter a num between 0-20:");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &guessNum);
		if (guessNum == num) {
			printf("You win!");
		}
		else if (guessNum > num) {
			printf("Your number is higher!\n");
		}
		else if (guessNum < num) {
			printf("Your number is less!\n");
		}
		else
		{
			printf("Wrong number!\n");
		}
	}
	printf("You lose :(");
	return 0;
}