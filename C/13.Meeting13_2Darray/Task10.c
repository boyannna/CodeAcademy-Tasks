#include<stdio.h>
#include"My_Lib.h"

int main() {

	float arr[ARR_ROWS3][ARR_COLS3];

	printf("Enter values of array \n");
	input3(arr);
	sumRows(arr);
	sumCols(arr);

	return 0;
}