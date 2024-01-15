#include<stdio.h>

int main() {

	int arr[5];
	int values = 5;

	printf("Enter 5 values: ");
	for (int i = 0; i < values; i++) {
		scanf_s("%d", &arr[i]);
	}

    int min = arr[0];
    int max = 0;

	for (int i = 0; i < values; i++){
		if (min > arr[i]) {
			min = arr[i];
		}
	}

	printf("Min number is: %d", min);

	for (int i = 0; i < values; i++){
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	printf("\nMax number is: %d", max);

	return 0;
}