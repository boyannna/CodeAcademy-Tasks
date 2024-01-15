#include<stdio.h>
#include"My_Lib.h"

int main(void) {

	char str[] = "aa123aaa123123";
	char str2[] = "123";
	printf("%d times the second string occurs in the first \n", searchInTimes(str, str2));

}