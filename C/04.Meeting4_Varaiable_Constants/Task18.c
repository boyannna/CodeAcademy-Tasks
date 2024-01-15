//Задача 18 Довършете задачата за кемперите от миналия път като добавите
//променлива, в която да се събират парите, които клиента дължи на компанията.
//Принтирайте резултата.Питайте клиента дали иска още налични продукти.

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
    int secondAnswer = 0;

    printf("What do you need: caravana = 1 or camper = 2 \n");
    scanf_s("%d", &answer);

    if (answer == 1)
    {
        printf("For how many days: \n");
        scanf_s("%d", &days);
        availabilityCaravan -= 1;
        sum += costCaravan * days;
        printf("The sum is: %d \n", sum);
        printf("Do you want camper? Yes = 1 or No = 2 \n ");
        scanf_s("%d", &secondAnswer);
        
        if (secondAnswer == 1)
        {
            printf("For how many days: \n");
            scanf_s("%d", &days);
            availabilityCamper -= 1;
            sum += costCamper * days;
            printf("The sum is: %d", sum);
        }
        else
        {
            printf("Thank you, have a nice day!");
        }
    }
    else if (answer == 2)
    {
        printf("For how many days: \n");
        scanf_s("%d", &days);
        availabilityCamper -= 1;
        sum += costCamper * days;
        printf("The sum is: %d \n", sum);
        printf("Do you want caravan? Yes = 1 or No = 2 \n ");
        scanf_s("%d", &secondAnswer);
        
        if (secondAnswer == 1)
        {
            printf("For how many days: \n");
            scanf_s("%d", &days);
            availabilityCaravan -= 1;
            sum += costCaravan * days;
            printf("The sum is: %d", sum);
        }
        else
        {
            printf("Thank you, have a nice day!");
        }
    }
    else
    {
        printf("Wrong number!");
    }

    return 0;
}