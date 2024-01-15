#include<stdio.h>
#include"My_Lib.h"

int main() {
	char str1[15];
	char str2[15];
	char str3[15];
	char str4[15];

	my_strcpy(str1, "code");
	my_strcpy(str2, "Code");

	if (my_strncmp(str1, str2, 4) == 1)
		printf("Strings are equal\n");
	else
		printf("Strings are unequal\n");


    my_strcpy(str3, "academy");
	my_strcpy(str4, "academy");

	if (my_strncmp(str3, str4, 5) == 1)
		printf("Strings are equal\n");
	else
		printf("Strings are unequal\n");

	return 0;

}