//Task3
//��������� ���������� �� ������ 2 �� �������� �������� ������� �� ��������
//����������(��������� �� � ��� main ���������) :
//	void print_bin(unsigned n)
//{
//	unsigned i;
//	for (i = 1 << 7; i > 0; i = i >> 1)
//		(n & i) ? printf("1") : printf("0");
//	printf("\n");
//}
//��������� �� ��������� � ��������� ������ �� signed char � unsigned char

#include <stdio.h>
#include<limits.h>

void print_bin(unsigned n)
{
    unsigned i;
    for (i = 1 << 7; i > 0; i = i >> 1)
        (n & i) ? printf("1") : printf("0");
    printf("\n");
}

int main() {
	int n = UINT_MAX;
	print_bin(n);
	return 0;
}