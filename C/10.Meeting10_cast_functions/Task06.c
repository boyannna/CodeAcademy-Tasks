#include<stdio.h>

int factorial(int a);
int factorialRecursion(int a);

int main() {

	// a)
	int number = 5;
	printf("The factorial of %d is: %d\n", number, factorial(number));
	//b)
	printf("The factorial of %d is: %d\n", number, factorialRecursion(number));

	return 0;
}

int factorial(int a) {
	int sum = 1;

	for (int i = a; i > 0; i--)
	{
		sum *= i;
	}
	return sum;
}

int factorialRecursion(int a){

	if (a == 1) {
		return a;
	}
	return factorialRecursion(a-1) * a;
	
}