#include<stdio.h>
#include"My_Lib.h"

int main() {

	float arr[ARR_ROWS3][ARR_COLS3];
	float arr2[3] = { 1.0f , 1.0f , 1.0f };

	printf("Enter values of array \n");
	input3(arr);

	if (search(arr,arr2) == 1) {
		printf("\nTRUE\n");
	}
	else {
		printf("\nFALSE\n");
	}


	return 0;
}