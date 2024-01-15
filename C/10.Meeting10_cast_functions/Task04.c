#include"mymath.h"


int main() {

	int a = 2;
	int b = 4;
	int r = 1;

	printf("Area of circle:%.2lf\n",area(r));
	printf("Area of triangle: %.2lf\n", areaTriangle(a,b));
	printf("Area of rectangle: %d\n", areaRectangle(a, b));

	return 0;
}
