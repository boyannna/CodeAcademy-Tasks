#include<stdio.h>
#include"My_Lib.h"
#define MAX_SIZE 64

int main(void) {
	int min = 0;
	int max = 0;
	int arr[MAX_SIZE];
	int length = 0;

	printf("Enter length of arr: ");
	scanf_s("%d", &length);
    
	printf("Enter min and max: ");
	scanf_s("%d %d", &min, &max);

	input(arr, length);
	intervalTask8(arr, length, min, max);
	print(arr, length);

	return 0;
}

