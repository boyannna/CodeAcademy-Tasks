#include<stdio.h>

int main() {
	int num = 10;
	int sum = 0;

	for (int i = 0; i < num; i++) {
		sum += i;
	}
	printf("The sum is: %d \n", sum);

	//9.1
	int from = 0;
	int to = 0;
	int sum2 = 0;

	printf("Enter a range of numbers: ");
	scanf_s("%d %d", &from, &to);

	for (int from = 0; from <= to; from++) {
		sum2 += from;
	}
	printf("The sum is: %d", sum2);

	return 0;

}