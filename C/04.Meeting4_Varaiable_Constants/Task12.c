//������ 12. ��� ����� �������� ��� char str[] = �H�llo�, ��������
//������� l � � �� ����� �������� ��� � ����������� ��������� ��
//���������.

#include<stdio.h>

int main() {

	char str[] = "Hello";
	
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == 'l') 
		{
			str[i] = 'x';
		}
	}
	
	printf("The new string is: %s ", str);

	return 0;
}