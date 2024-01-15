#include<stdio.h>
#include"My_Lib.h"

int main(void) {

	const char* str[] = { 'h','i','\0' };

	printstr(*str);

	return 0;
}