//Task 7
//����������� ���������� ��� ��������
//4.9876543, 7.123456789012345678890, 18 398 458 438 583 853.28, 18 398 458 438
//583 853.39875937284928422.
//�������� ����� ���������� �� ������ � printf()

#include <stdio.h>

int main() {

	double a = 4.9876543;
	long double b = 7.123456789012345678890;
	double c = 18398458438583853.28;
	double d = 18398458438583853.39875937284928422;

	printf("A is : %.7lf \n", a);
	printf("B is : %.21llf \n", b);
	printf("C is : %.2lf \n", c);
	printf("D is : %.16f \n", d);

	return 0;
}
