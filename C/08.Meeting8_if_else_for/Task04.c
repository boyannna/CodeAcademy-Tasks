#include<stdio.h>

int main() {

	int sex = 0;
	int age = 0;
	printf("Enter sex: 1 for woman and 2 for men\n");
	scanf_s("%d", &sex);
	printf("Enter age: \n");
	scanf_s("%d", &age);

	if (sex == 1 && (age >= 25 && age <= 35)) {
		printf("Congratulations you are suitable!\n");
	}
	else if (sex == 2 && (age >= 30 && age <= 40)) {
		printf("Congratulations you are suitable!\n");
	}
	else {
		printf("Sorry, you are not suitable!\n");
	}

	//4.1
	printf("Enter sex: 1 for woman and 2 for men\n");
	scanf_s("%d", &sex);
	printf("Enter age: \n");
	scanf_s("%d", &age);

	(sex == 1 && (age >= 25 && age <= 35))? printf("Congratulations you are suitable!\n"): printf("Sorry, you are not suitable!\n");

    //4.2
	printf("Enter sex: 1 for woman and 2 for men\n");
	scanf_s("%d", &sex);
	printf("Enter age: \n");
	scanf_s("%d", &age);

	if (sex == 1 && (age == 25 || age == 35)) {
		printf("Congratulations you are suitable!\n");
	}
	else if (sex == 2 && (age == 30 || age == 40)) {
		printf("Congratulations you are suitable!\n");
	}
	else {
		printf("Sorry, you are not suitable!\n");
	}

	//4.3
	printf("Enter sex: 1 for woman and 2 for men\n");
	scanf_s("%d", &sex);
	printf("Enter age: \n");
	scanf_s("%d", &age);

	if (sex == 1 && ((age >= 25 && age <= 30) || (age >= 35 && age <= 40))) {
		printf("Congratulations you are suitable!\n");
	}
	else if (sex == 2 && ((age >= 30 && age <= 35) || (age >= 40 && age <= 45))) {
		printf("Congratulations you are suitable!\n");
	}
	else {
		printf("Sorry, you are not suitable!\n");
	}
	return 0;
}