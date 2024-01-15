#include<stdio.h>
#include"My_Lib.h"

int main(void) {

	char str[] = "boyanna";
	char str2[] = "boyan";
	printf("The starting index is [%d] \n", search(str, str2));
	printf("The starting index is [%d] \n", search("aa123bbb", "123"));
	printf("The starting index is [%d] \n", search("aaa", "bbb"));

}