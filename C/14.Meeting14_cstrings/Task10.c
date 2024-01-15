#include <stdio.h>
#include"My_Lib.h"

int main(void) {

	char* str = "abcd";
	char* str2 = "abCd";
	char* str3 = "abcd";
	
	printf(" %d \n", my_strcmp(str,str2));
	printf(" %d \n", my_strcmp(str, str3));
	printf(" %d \n", my_strcmp(str2, str3));

	return 0;
}