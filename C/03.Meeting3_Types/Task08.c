//Task 8
//����������� ��, �� ����� ����� �� �������� �� �������� � ������� ��� ����, ��
//����� ������ �� ����������� �������.
//����� ���� 3 �������� �� ���� 90 ��.�� ��� � 3 ������� �� ���� 100 ��.�� ���.
//������������ ���������� �� ���� �� ����������, ������ �� ����������, ���� ��
//��������� � ������ ��.
//��������� ����, ����� ���� ������� �������� ��� ������ �� ����.
//��������� ����������, � ����� �� �� ������� ������, ����� ������� ����� ��
//����������.
//����������� ���������.

#include <stdio.h>

int main()
{
    int costCaravan = 90;
    int costCamper = 100;
    int availabilityCaravan = 3;
    int availabilityCamper = 3;
    int answer = 0;
    int days = 0;
    int sum = 0;

    printf("What do you need: caravana = 1 or camper = 2 \n");
    scanf_s("%d", &answer);
    printf("For how many days: \n");
    scanf_s("%d", &days);

    if (answer == 1) 
    {
        availabilityCaravan -= 1;
        sum += costCaravan * days;
        printf("The sum is: %d", sum);
    }
    else if (answer == 2) 
    {
        availabilityCamper -= 1;
        sum += costCamper * days;
        printf("The sum is: %d", sum);
    }
    else
    {
        printf("Wrong number!");
    }

    return 0;
}