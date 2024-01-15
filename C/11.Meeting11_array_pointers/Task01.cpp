#include<stdio.h>

int main() {

    int arr[100];
    int arr2[100];
    int size;

    printf("Enter the size of the array: ");
    scanf_s("%d", &size);

    printf("Enter values:");
    for (int i = 0; i < size; i++) {
        scanf_s("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");


    for (int i = 0; i < size; i++) {
        arr2[i] = arr[i] * 2;
        printf("%d", arr2[i]);
    }

    return 0;
}