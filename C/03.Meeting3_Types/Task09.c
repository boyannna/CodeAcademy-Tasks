// Task 9
//�������� � ��������, ����� ��������� ���������� �� ������� � ������� �� ����������
//�����.�������� ���� �� ������ �������� ���������� �� ��������.� �������� ���
//�������� ������� �������� � ���� :
//������ - 4.5 ��.�� ��������,
//������ 1.80 ��.�� ��������,
//������ ����� - 0.50 ��.�� ����,
//�������� �� ������� 0.60 ��.����
//������� 1.50 ��.�� ��������,
//�������� 0.15 ��.�� ����.

#include <stdio.h>

int main()
{
	double tomatoes = 4.5;
	double flour = 1.8;
	double yoghurt = 0.5;
	double iceCream = 0.6;
	double candy = 1.50;
	double lollipop = 0.15;
	int question = 0;
	double quantity = 0.0;
	double sumOfProducts = 0.0;


	while (question != 7)
	{
		printf("What do you need:\nPRESS 1 for tomatoes\nPRESS 2 for flour\nPRESS 3 for yoghurt\nPRESS 4 for iceCream\nPRESS 5 for candy\nPRESS 6 for lollipop \nPRESS 7 for sum\n");
		scanf_s("%d", &question);

		switch (question) {
		    case 1: {
			printf("How much: \n");
			scanf_s("%lf", &quantity);
			sumOfProducts += quantity * tomatoes;
			break;
		    }
		    case 2: {
			printf("How much: \n");
			scanf_s("%lf", &quantity);
			sumOfProducts += quantity * flour;
			break;
		    }
		    case 3: {
			printf("How much: \n");
			scanf_s("%lf", &quantity);
			sumOfProducts += quantity * yoghurt;
			break;
		    }
		    case 4: {
			printf("How much: \n");
			scanf_s("%lf", &quantity);
			sumOfProducts += quantity * iceCream;
			break;
		    }
		    case 5: {
			printf_s("How much: \n");
			scanf_s("%lf", &quantity);
			sumOfProducts += quantity * candy;
			break;
		    }
		    case 6: {
			printf("How much: \n");
			scanf_s("%lf", &quantity);
			sumOfProducts += quantity * lollipop;
			break;
		    }
		    case 7: {
			printf("Sum is: %.2lf", sumOfProducts);
			break;
		    }
		    default: {
			printf("Wrong number, press number again!\n");
			break;
		    }
		}
	}


	return 0;
}
