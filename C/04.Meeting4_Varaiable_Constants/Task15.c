//Задача 15. Използвайте статична локална променлива, за да постигнете
//същото поведение, описано в задача 14.

#include<stdio.h>

void test() {
	static int lVariable = 21;
	lVariable++;
	printf("Local variable is: %d \n", lVariable);
}

int main() {

	test();
	test();
	test();

	return 0;
}