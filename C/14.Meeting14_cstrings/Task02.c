#include<stdio.h>
#include"My_Lib.h"
#define MAX_SIZE 64

int main(void) {

	char str[] = "abcba";
	char str2[MAX_SIZE];

	appropriated(str, str2);
	strReverse(str);

	if (isPalindrome(str, str2) == 1) {
		printf("TRUE\n");
	}
	else {
		printf("FALSE\n");
	}

	return 0;
}