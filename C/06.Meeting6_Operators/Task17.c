//���������� 17 * ��������� ��������� �� �������� ����� �� ������� ���������(xorshift) :
//	int A = 1, ���������� � ������� ��������
//	��� ����� ������� �� ����� �� ���������� �� ����� �������� :
//  (i)A ^= A << 13;
// (ii)A ^= A >> 17;
//(iii)A ^= A << 5;
//��� ����� �������� �������� ������� �� ������.
//(��������� �������� � ���������� long long int)

//Izliza edno i syshto chislo

#include<stdio.h>
#include <stdlib.h>

long long int A = 1;

long long int xorshoft() {
	A ^= A << 13;
	A ^= A >> 17;
	A ^= A << 5;
	return A;
}

int main() {
	
	rand();
	printf("Number is: %lld \n", xorshoft());
	return 0;
}