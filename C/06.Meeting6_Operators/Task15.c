//Упражнение 15. Логически оператори

#include<stdio.h>

int main() {
	int a,b,c,d; 

	printf("Please input a: ");
	scanf_s("%d", &a);
	printf("Please input b: ");
	scanf_s("%d", &b);
	printf("Please input c: ");
	scanf_s("%d", &c);
	printf("Please input d: ");
	scanf_s("%d", &d);

	if (a > b && a != 0) {
		printf("&& Operator : Both conditions are true\n");
	}
	if (c > d || c != 20) {
		printf("|| Operator : Only one condition is true\n");
	}
	if (!(a > b && b != 0)) {
		printf(" ! Operator : Both conditions are true\n");
	}
	if (!(a > c && c != 0)) {
		printf(" && Operator : Both conditions are true\n");
	}
	if (!(d > b || d != 30)) {
		printf(" || Operator : Only one condition is true\n");
	}
	else {
		printf("Both conditions are true.\n");
	}
}