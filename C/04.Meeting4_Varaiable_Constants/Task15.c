//������ 15. ����������� �������� ������� ����������, �� �� ����������
//������ ���������, ������� � ������ 14.

#include<stdio.h>

void test() {
	static int lVariable = 21;
	lVariable++;
	printf("Local variable is: %d \n", lVariable);
}

int main() {

	test();
	test();
	test();

	return 0;
}