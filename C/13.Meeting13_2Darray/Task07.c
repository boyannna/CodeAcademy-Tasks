#include<stdio.h>
#include"My_Lib.h"

int main() {

	float arr[ARR_ROWS3][ARR_COLS3];
    float arr2[3] = {1.0f , 2.0f , 3.0f};

	printf("Enter values of array \n");
	input3(arr);
	multiplyWith3Vector(arr, arr2);

	return 0;
}