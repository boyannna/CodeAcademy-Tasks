//Task 8
//Представете си, че имате фирма за отдаване на каравани и кемпери под наем, за
//която трябва да разработите софтуер.
//Имате общо 3 каравани на цена 90 лв.на ден и 3 кемпера на цена 100 лв.на ден.
//Декларирайте променливи за броя на караваните, цената на караваните, броя на
//кемперите и цената им.
//Направете меню, което пита клиента каравана или кемпер ще иска.
//Направете променлива, в която да се събират парите, които клиента дължи на
//компанията.
//Принтирайте резултата.

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