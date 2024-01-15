//Task 4
//Дефинирайте променливи със стойности : -127, 255, 63 498, 4 294 967 292, 
//-9 000 000 000 000 775 845.
//Изведете всяка променлива на екрана със printf()

#include<stdio.h>

int main() {

	signed char a = -127;
	short int b = 255;
	unsigned short int c = 63498;
	unsigned int d = 4294967292;
	long long int e = -9000000000000775845;

	printf("A is : %d \n", a);
	printf("B is : %hd \n", b);
	printf("C is : %hu \n", c);
	printf("D is : %u \n", d);
	printf("E is : %lld \n", e);

	return 0;
}