#include<stdio.h>
#include <string.h>
#include"My_Lib.h"

int main() {
	char str[] = "Dog";
	char str2[] = "Cat";
	print("Before copy: ");
	print(str2);
	my_strcpy(str2, str);
	print("After copy: ");
	print(str2);
	return 0;
}