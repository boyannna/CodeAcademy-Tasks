#include<stdio.h>

int main() {
	int num = 0;
	int sum = 0;

	while (num < 10) {
		sum += num;
		num++;
	}
	printf("The sum is: %d", sum);

	return 0;

}
