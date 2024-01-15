#include<stdio.h>
#include"My_Lib.h"

int main(void) {

	char str[] = "my@email@abv.bg";
	char str2[] = "my...email@gmailbg";

	if (emailValidate(str2) == 1) {
		printf("VALID\n");
	}
	else {
		printf("INVALID\n");
	}
}