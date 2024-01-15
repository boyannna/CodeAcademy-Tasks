#include<stdio.h>

int main() {
	int a = 0;
	int b = 0;
	char operation = 0;

	printf("Enter number:\n");
	scanf_s("%d", &a);
	printf("Enter operation: +, -, * or /\n");
	scanf_s(" %c", &operation);
	printf("Enter the second number:\n");
	scanf_s("%d", &b);

	switch (operation)
	{
	case '+':
		printf("%d + %d = %d", a, b, a + b);
		break;
	case '-':
		printf("%d - %d = %d", a, b, a - b);
		break;
	case '*':
		printf("%d * %d = %d", a, b, a * b);
		break;
	case '/':
		if (b != 0) {
			printf("%d / %d = %.2lf", a, b,(double) a / b);
			break;
		}
		else {
			printf("Is not divisible by zero");
			break;
		}
	default:
		printf("Wrong operator!a");
		break;
	}
	return 0;
}
