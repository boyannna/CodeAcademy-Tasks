//Упражнение 12. Оператори за присвояване

#include <stdio.h>
int main() 
{
	int nResult = 13; 
	int nX = 4;
	int nY = 1;

	printf("Result = %d\n", nResult);
	nResult += nX;
	printf("Result += %d -> %d\n", nX, nResult);
	nResult = 1;
	nResult <<= nX;
	printf("Result <<= %d -> %d\n", nX, nResult);
	nResult *= nX;
    printf("Result *= %d\n", nResult);
	nResult = 0;
	nResult &= nY;
	printf("Result &= %d\n", nResult);
	
	// Kak raboti?
	nResult ^= nY;
	printf("Result = %d\n", nResult);

	return 0;
} 