#include<stdio.h>
#include"My_Lib.h"

int main() {

	const char* str = "CodeAcademy";
	const char* substr = "Academy";

	char* temp = my_strstr(str, substr);
	printf("%s\n", temp);
	return 0;

}