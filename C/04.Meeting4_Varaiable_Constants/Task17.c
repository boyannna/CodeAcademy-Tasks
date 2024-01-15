//Задача 17. * Към задача 16 да се добави втора функция, която изчислява
//лицето на елипса по зададени два параметъра(Пи* A* B)

#include<stdio.h>

double pi = 3.14159;

void circle(double R)
{
	double sum = 0;
	sum = pi * R * R;
	printf("The face of circle is: %f \n", sum);
}

void ellipce(int A, int B) {
	double sum = 0;
	sum = pi * A * B;
	printf("The face of the ellipse is: %f \n", sum);
}

int main()
{
	int R1 = 1;
	double R2 = 1.5;
	int R3 = 13;
	int A = 7;
	int B = 21;

	circle(R1);
	circle(R2);
	circle(R3);

	ellipce(A, B);

	return 0;
}