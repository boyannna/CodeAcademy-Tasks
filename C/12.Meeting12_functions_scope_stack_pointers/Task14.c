#include<stdio.h>
#include"My_Lib.h"

int main(void) {

	int a = 21;
	int b = 51;
	
	int* pa = &a;
	int* pb = &b;

	swapp(&pa, &pb);

	printf("A is: %d\nB is: %d", *pa, *pb);

	return 0;
}