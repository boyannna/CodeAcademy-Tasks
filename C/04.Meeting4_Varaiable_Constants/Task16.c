//������ 16. �� �� �������� ����������� ��(3.14159...) � �� �� ������
//�������, ����� ��������� ������ �� ��������� �� ����� ������(��* R* R).
//� main() �� �� ������ ������� ������� � ������� 1, 1.5, 13.

#include<stdio.h>

double pi = 3.14159;

void circle(double R)
{
	double sum = 0;
	sum = pi * R * R;
	printf("The face of circle is: %f \n", sum);
}

int main() 
{
	int R1 = 1;
	double R2 = 1.5;
	int R3 = 13;

	circle(R1);
	circle(R2);
	circle(R3);

	return 0;
}