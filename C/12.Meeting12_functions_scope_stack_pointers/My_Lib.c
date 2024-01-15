#include<stdio.h>
#include"My_Lib.h"

void input(int arr[], const int length) {

	for (int i = 0; i < length; i++){
		printf("Enter values: ");
		scanf_s("%d", &arr[i]);
	}
	
}

void print(const int arr[], const int length) {
	printf("The array is: ");
	for (int i = 0; i < length; i++){
		printf("%d ", arr[i]);
	}
}

//Task 1
int minAndMax(const int min,const int max) {
	int sum = 1;
	for (int i = min; i <= max; i++){
		sum *= i;
	}
	printf("The sum is: %d ",sum);
}

//Task 2
void sumOfArr(const int arr[],const int length) {
	int sum = 1;
	for (int i = 0; i < length; i++){
		sum *= arr[i];
	}
	printf("The sum is: %d", sum);
}

//Task 3
double averageArr(const int arr[], const int length) {
	double sum = 0;
	for (int i = 0; i < length; i++) {
		sum += arr[i];
	}
	printf("Average is: %.2lf", (sum / length));
}

//Task 4
void printTask4(const int arr[],const int length) {
	for (int i = 0; i < length; i++){
		printf("[%d] ", arr[i]);
	}
}

//Task 5
int interval(int arr[], const int min,const int max, const int length) {
	printf("Input number %d to %d \n", min, max);
	for (int i = 0; i < length; i++){
		printf("Number: ");
		scanf_s("%d", &arr[i]);
	}
}

//Task 7
void isNegative(int arr[], const int length) {
	for (int i = 0; i < length; i++){
		if (arr[i] < 0) {
			arr[i] = 0;
		}
	}
}

//Task 8
int intervalTask8(int arr[], const int length, const int min, const int max) {

	for (int i = 0; i < length; i++){
		if (arr[i] < min) {
			arr[i] = min;
		}
		else if (arr[i] > max) {
			arr[i] = max;
		}
	}
}

//Task 9
void copy(const int arr[], int arr2[], const int length) {

	for (int i = 0; i < length; i++)
	{
		arr2[i] = arr[i];
	}
}

//Task 10
void swap(int arr[], int arr2[], const int length) {

	for (int i = 0; i < length; i++){
		int temp = arr[i];
		arr[i] = arr2[i];
		arr2[i] = temp;
	}
}

//Task 11
void printstr(const char* s) {

	for (int i = 0; s[i] != '\0' ; i++) {
			printf("%c\n", s[i]);
	}
}

//Task 13
void swapPointer(int* a, int* b) {

	int temp = *a;
	*a = *b;
	*b = temp;

	printf("A is: %d\nB is: %d", *a, *b);
}
//Task 14
void swapp(int** a, int** b) {

	int* temp = *a;
	*a = *b;
	*b = temp;
}