#include<stdio.h>
#include"My_Lib.h"

int main() {
	float arr[ARR_ROWS3][ARR_COLS3];
	float arr3D[ARR_BLOCK3][ARR_ROWS3][ARR_COLS3];
	float number = 0.0f;
	printf("Enter number: \n");
	scanf_s("%f", &number);
	
	input3(arr);
	multiplyWithNumber2D(arr, number);
	print3(arr);

	//With 3D array
	printf("Enter values of array \n");
	input3D(arr3D);
	multiplyWithNumber3D(arr3D, number);
	print3D(arr3D);

	return 0;
}