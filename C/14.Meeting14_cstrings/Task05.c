#include<stdio.h>
#include"My_Lib.h"

int main(void) {

	char str[] = "Boyanna";
	char c = 'n';
	printf("The number of occurrences of '%c' are: %d", c, numberOfMeetings(str,c));
	return 0;
}