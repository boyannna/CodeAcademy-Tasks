#include<stdio.h>

int main() {

	const double ha = 12.5;
	const double a = 20.6;
	const double P = 2 * a + 2 * ha;
	double S = a * ha;
	
	printf("ha = b = 12.5 =>\nP = 2a + 2b = %f", P);
	printf("\nS = a * b = %f", S);

	return 0;
}