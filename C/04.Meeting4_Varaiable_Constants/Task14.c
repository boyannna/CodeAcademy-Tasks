//Задача 14. Напишете глобална променлива, която увеличаваме с 1 във
//функция void test().Извикайте функцията три пъти test() от main()
//принтирайте стойността на глобалната променлива.

#include<stdio.h>

int gVariable = 21;

void test() {
	gVariable++;	
}

int main() {

	test();
	test();
	test();
	printf("Global variable is: %d", gVariable);

	return 0;
}