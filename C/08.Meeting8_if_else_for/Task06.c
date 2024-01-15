#include<stdio.h>

int main() {
	int month = 0;

	printf("Enter a number of month:");
	scanf_s("%d", &month);

	switch (month) {
		case 1 :
			printf("January have 31 days");
			break;
		case 2:
			printf("This february have 28 days");
			break;
		case 3:
			printf("March have 31 days");
			break;
		case 4:
			printf("April have 30 days");
			break;
		case 5:
			printf("May have 31 days");
			break;
		case 6:
			printf("June have 30 days");
			break;
		case 7:
			printf("July have 31 days");
			break;
		case 8:
			printf("August have 31 days");
			break;
		case 9:
			printf("September have 30 days");
			break;
		case 10:
			printf("October have 31 days");
			break;
		case 11:
			printf("November have 30 days");
			break;
		case 12:
			printf("December have 31 days");
			break;
		default :
			break;
	}
	return 0;
}