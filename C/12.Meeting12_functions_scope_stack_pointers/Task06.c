#include<stdio.h>
#include"My_Lib.h"
#define MAX_SIZE 64

int main(void) {
	int arr[MAX_SIZE];
	int length = 0;

	printf("Enter length of arr: ");
	scanf_s("%d", &length);

	input(arr, length);
	print(arr, length);

	return 0;
}
