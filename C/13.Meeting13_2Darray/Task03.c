#include<stdio.h>
#include"My_Lib.h"

int main() {

	float arr[ARR_ROWS4][ARR_COLS4];
	int booll = 0;
	printf("Enter values of array \n");
	input(arr);

	booll = identityMatrix(arr);
    print(arr);
	if (booll == 1) {
		printf("\nTRUE\n");
	}
	else {
		printf("\nFALSE\n");
	}


	return 0;
}