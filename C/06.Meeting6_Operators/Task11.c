// Задача 11. Аритметични оператори

#include <stdio.h>
int main()
{
	int iX = 13;
	int iY = 44;
	int iResult = 0;

	float x = 13;
	float y = 44;
	float result = 0;

	iResult = iX - iY;
	printf("%d - %d = %d \n", iX, iY, iResult);
	iResult = iY / iX;
	printf("%d / %d = %d \n", iY, iX, iResult);
	iResult = iY % iX;
	printf("%d / %d Remainder: %d\n", iY, iX, iResult);
	result = x + y;
	printf("%f + %f = %f \n", x, y, result);
	result = x * y;
	printf("%f * %f = %f \n", x, y, result);

	return 0;
}