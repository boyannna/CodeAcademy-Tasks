#include<stdio.h>
#include"My_Lib.h"

int main() {

	int min = 0;
	int max = 0;

	printf("Enter min and max: ");
	scanf_s("%d %d", &min, &max);

	minAndMax(min, max);

	return 0;
}