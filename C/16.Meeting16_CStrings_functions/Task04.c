#include <stdio.h>
#include"My_Lib.h"

int main() {
	char str1[64] = "Hello ";
	char* str2 = "world";

	printf("%s", my_strncat(str1, str2,2));

	return 0;
}