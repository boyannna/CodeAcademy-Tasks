#include<stdio.h>

int areaTriangle(int a, int b); 
int areaRectangle(int a, int b);

int main() {
	printf("Area of triangle is: %d\n", areaTriangle(3, 4));
	printf("Area of rectangle is: %d \n", areaRectangle(3, 4));
}

int areaTriangle(int a, int b) {
	return (a * b) / 2;
}

int areaRectangle(int a, int b) {
	return a * b;
}
