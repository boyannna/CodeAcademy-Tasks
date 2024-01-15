#include<stdio.h>
#include"My_Lib.h"

int main() {

	float arr[ARR_ROWS3][ARR_COLS3];
	float arr2[ARR_ROWS3][ARR_COLS3] = { {7.0f , 3.0f , 8.0f},
						                 {11.0f , 9.0f , 5.0f},
	                                     {6.0f , 8.0f , 4.0f} };
	float arr4[ARR_ROWS3][ARR_COLS3] = { {1.0f , 2.0f , 3.0f},
										 {4.0f , 5.0f , 6.0f},
										 {7.0f , 8.0f , 9.0f} };
	float arr3[ARR_ROWS3][ARR_COLS3];

	printf("Enter values of array \n");
	input3(arr);
	multiplyMatrix(arr, arr4, arr3);
	print3(arr3);

	return 0;
}