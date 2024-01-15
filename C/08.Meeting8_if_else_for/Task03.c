#include<stdio.h>

int main() {
	int height = 0;
	printf("Enter height: ");
	scanf_s("%d", &height);

	if (height <= 145) {
		printf("Low height");
	}
	else if (height < 181) {
		printf("Average height");
	}
	else if (height < 206) {
		printf("Tall height");
	}
	else {
		printf("Extremely tall");
	}

	return 0;
}