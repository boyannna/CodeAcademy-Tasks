//������ 14. �������� �������� ����������, ����� ����������� � 1 ���
//������� void test().��������� ��������� ��� ���� test() �� main()
//����������� ���������� �� ���������� ����������.

#include<stdio.h>

int gVariable = 21;

void test() {
	gVariable++;	
}

int main() {

	test();
	test();
	test();
	printf("Global variable is: %d", gVariable);

	return 0;
}