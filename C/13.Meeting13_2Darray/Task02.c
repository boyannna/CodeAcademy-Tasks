#include<stdio.h>
#include"My_Lib.h"

int main() {

	float arr[ARR_ROWS4][ARR_COLS4];
	float arr2[ARR_ROWS4][ARR_COLS4];

	printf("Enter values of array: \n");
	input(arr);
	printf("Enter values of array2: \n");
	input(arr2);

	areSame(arr,arr2);

	print(arr);
	print(arr2);

	return 0;
}