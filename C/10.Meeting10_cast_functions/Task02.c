#include<stdio.h>

const double gPi = 3.14;

double circle_area_qna(void) {
	double r = 0.0;
	printf("Enter a radius\n");
	scanf_s("%lf", &r);
	printf("%lf", area(r));
}

double area(double r){
	return r*r*gPi;
}

int main() {
	circle_area_qna();
	return 0;
}