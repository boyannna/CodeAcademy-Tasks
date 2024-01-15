#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int randPositive(int max);
int randRange(int min, int max);

int main() {
	int min = 0;
	int max = 0;
	printf("Enter min and max:");
	scanf_s("%d %d", &min, &max);
	randPositive(max);
	randRange(min,max);
	return 0;
}

int randPositive(int max) {
	srand(time(NULL));
    int number = 0;
	number = rand() % max;
	printf("The random number < %d is: %d\n", max, number);
}

int randRange(int min, int max) {
	srand(time(NULL));
	int number = 0;
	number = rand() % (max - min) + min;
	printf("The random number between %d and %d is: %d\n", min, max, number);
}