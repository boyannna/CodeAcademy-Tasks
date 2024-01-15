#include<stdio.h>

int main() {

	int arr[10];
    int values = 10;
	int counter = 9;

    printf("Enter 10 values: ");
    for (int i = 0; i < values; i++) {
        scanf_s("%d", &arr[i]);
    }

	for (int i = 0; i < values/2; i++){
		int temp = arr[i];
		arr[i] = arr[counter];
		arr[counter] = temp;
		counter--;
	}

	printf("Revers array is: ");

	for (int i = 0; i < values; i++) {
		printf(" %d ", arr[i]);
	}

    return 0;
}