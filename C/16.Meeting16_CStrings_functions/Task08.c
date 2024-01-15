#include<stdio.h>
#include"My_Lib.h"
#define MAX_SIZE 64

int main() {
	char* str = "HelloVector";
	size_t idx_from = 3 ;
	size_t idx_to = 6;
	char result[MAX_SIZE];
	extract_substr(str,idx_from,idx_to,result);
	print(result);
	return 0;
}