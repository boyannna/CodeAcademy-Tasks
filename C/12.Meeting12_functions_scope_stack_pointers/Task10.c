#include<stdio.h>
#include"My_Lib.h"
#define MAX_SIZE 64

int main(void) {

	int arr[MAX_SIZE];
	int arr2[MAX_SIZE];
	int length = 0;

	printf("Enter length of arr: ");
	scanf_s("%d", &length);

	printf("Input array \n");
	input(arr, length); 
	printf("Input array2 \n");
	input(arr2, length);
	swap(arr, arr2, length);
	print(arr, length);
	printf("\n");
	print(arr2, length);

	return 0;
}
