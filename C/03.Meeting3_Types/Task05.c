//Task 5
//Дефинирайте променливи със стойност 24 212, -1 357 674, 1 357 674, 
//-1 357 674 000, 3 657 895 000.
//Изведете всяка променлива на екрана със printf()

#include<stdio.h>

int main() {

	short int a = 24212;
	int b = -1357674;
	int c = 1357674;
	long int d = 1357674000;
	unsigned int e = 3657895000;

	printf("A is : %hd \n", a);
	printf("B is : %d \n", b);
	printf("C is : %d \n", c);
	printf("D is : %ld \n", d);
	printf("E is : %u \n", e);

	return 0;
}