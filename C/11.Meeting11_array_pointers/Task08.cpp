#include<stdio.h>

int main() {

	int arr[10];
	int values = 10;

	printf("Enter 10 values: ");
	for (int i = 0; i < values; i++) {
		scanf_s("%d", &arr[i]);
	}

	printf("Array is: ");
	for (int i = 0; i < values; i++) {
		printf("%d ", arr[i]);
	}

	printf("\nEven array is: ");
	for (int i = 0; i < values; i++){
		if (arr[i] % 2 == 0) {
			printf("%d ", arr[i]);
		}
	}

	printf("\nOdd array is: ");
	for (int i = 0; i < values; i++) {
		if (arr[i] % 2 != 0) {
			printf("%d ", arr[i]);
		}
	}

	return 0;
}
