#include<stdio.h>
#include"My_Lib.h"

int main() {
	char* str[] = {"aaa", "aab","aac"};
	char* str2[] = {"aad", "aab","aac" };

	if (isSorted(str) == 1) {
		printf("TRUE");
	}
	else {
		printf("FALSE");
	}

	return 0;
}