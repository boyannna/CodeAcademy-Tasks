//������ 11. ��� ����� �������� ��� �� ������� char str[] = �Hello�;
//��������� ����� ���� �� �������� ������� � ���, ����� �� ��������
//��������� �� ����.��� ���� char rts[] = �oll�H�; � �����������
//���������.

#include<stdio.h>

void swap(char* str) {

	for (int i = 0; i < (strlen(str)/2) ; i++) 
	{
		int temp = str[i];
		str[i] = str[strlen(str) - i - 1];
		str[strlen(str) - i - 1] = temp;
	}

}

int main() {

	char str[] = "Hello";
	swap(str);
	printf("The new string is: %s ", str);

	return 0;
}