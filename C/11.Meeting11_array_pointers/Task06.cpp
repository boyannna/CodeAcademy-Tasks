#include<stdio.h>

void input(int arr[]);
void counterNumber(const int arr[], int size, int number);

int main() {

	int arr[5];
	int number = 0;
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("Enter number: \n");
	scanf_s("%d", &number);

    input(arr);
	counterNumber(arr, size, number);

	return 0;
}

void input(int arr[]) {

    printf("Enter values: \n");
	for (int i = 0; i < 5; i++){
		scanf_s("%d", &arr[i]);
	}
}

void counterNumber(const int arr[], int size, int number) {

	int counter = 0;

	for (int i = 0; i < size; i++){
		if (arr[i] == number) {
			counter++;
		}
	}
	printf("%d occurs %d times\n", number, counter);
}