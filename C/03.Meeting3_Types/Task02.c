//Task2
//Използвайте израз който да направи така че unsigned char да прехвърли
//максималната си стойност.Изведете резултата преди и след това.
//Направете същото със signed char.

#include<stdio.h>
#include<limits.h>

int main()
{
	printf("the max u %d \n", UCHAR_MAX);
	printf("the max u %d \n", (unsigned char)(UCHAR_MAX + 1));
	printf("the max s %d \n", SCHAR_MAX);
	printf("the max s %d \n", (signed char)(SCHAR_MAX + 1));

	//other tests
	printf("the half s %d \n", (signed char)(SCHAR_MAX + 129));
	printf("the min s %d \n", SCHAR_MIN);

	return 0;
}