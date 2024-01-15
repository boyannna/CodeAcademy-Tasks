#include <stdio.h>
#include"My_Lib.h"

int main(void) {

	char* str = "First line."
		        "Second line.";
	printf("String have %d line",countLines(str));
	return 0;
}