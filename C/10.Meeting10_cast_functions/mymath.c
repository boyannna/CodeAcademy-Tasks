#include"mymath.h"

const double gPi = 3.14;

double circle_area_qna(void) {
	double r = 0.0;
	printf("Enter a radius\n");
	scanf_s("%lf", &r);
	printf("%lf", area(r));
}

double area(double r) {
	return r * r * gPi;
}

double areaTriangle(int a, int b) {
	return (a * b) / 2;
}

int areaRectangle(int a, int b) {
	return a * b;
}

int fceil(float f) {
	return (int)f + 1;
}
int ffloor(float f){
	return (int)f;
}
int fround(float f) {
	int number = (int)(f * 10) % 10;
	if (number >= 5) {
		return(int)f + 1;
	}
	else{
		return (int)f;
	}
}