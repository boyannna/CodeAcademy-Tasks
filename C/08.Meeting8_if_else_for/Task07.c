#include<stdio.h>

int main() {
    int room = 0;
    int days = 0;

    printf("Please, select the room you'd like to use.\nPress 1 for Luxury room and 2 for Standart room: ");
    scanf_s("%d", &room);

    printf("Please, enter the days you'd like to stay(Capacity = 14): ");
    scanf_s("%d", &days);

    float sum = 0.0;
    switch (room) {
    case 1:
        if (days <= 14) {
            sum = days * 180 + days * 180 * 0.06;
            printf("Total sum is %.2f", sum);
        }
        else {
            printf("Invalid operation!");
        }
        break;

    case 2:
        if (days <= 14) {
            sum = days * 120 + days * 120 * 0.06;
            printf("Total sum is %.2f", sum);
        }
        else {
            printf("Invalid operation!");
        }
        break;

    default:
        printf("Invalid operation!");
        break;
    }
}