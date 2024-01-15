#include<stdio.h>
#include"My_Lib.h"

int main() {
	float arr[ARR_ROWS3][ARR_COLS3];
	int position1 = 0;
	int position2 = 0;

	printf("Enter positions: ");
	scanf_s("%d", &position1);
	scanf_s("%d", &position2);

	input3(arr);
	print3(arr);
	swapPositionsRows(arr, position1,position2);
	print3(arr);

	return 0;
}