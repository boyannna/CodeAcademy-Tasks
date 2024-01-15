//Упражнение 17 * Направете генератор на случайни числа по следния алгоритъм(xorshift) :
//	int A = 1, акумулатор с начална стойност
//	При всяко вземане на число от генератора се прави следното :
//  (i)A ^= A << 13;
// (ii)A ^= A >> 17;
//(iii)A ^= A << 5;
//При всяка итерация изведете числото на екрана.
//(Направете вариация с акумулатор long long int)

//Izliza edno i syshto chislo

#include<stdio.h>
#include <stdlib.h>

long long int A = 1;

long long int xorshoft() {
	A ^= A << 13;
	A ^= A >> 17;
	A ^= A << 5;
	return A;
}

int main() {
	
	rand();
	printf("Number is: %lld \n", xorshoft());
	return 0;
}