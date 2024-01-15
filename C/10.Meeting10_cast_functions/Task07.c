#include<stdio.h>
//problem

int factorialRecursion(int a);

int main() {
	int denominator = factorialRecursion(6) * factorialRecursion(43);
	int numerator = factorialRecursion(49);
	double sum =  numerator / (double)denominator;
	printf("The sum is: %lf", sum);
	return 0;
}


int factorialRecursion(int a) {

	if (a == 1) {
		return a;
	}
	return factorialRecursion(a - 1) * a;

}