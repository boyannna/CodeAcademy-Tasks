//Напишете програма, която изчислява броя на секундите в една година.

#include<stdio.h>

int main() {
	int year = 0;
	unsigned int seconds = 0;
	
	printf("Write year: \n");
	scanf_s("%d", &year);
	seconds = year * 365 * 24 * 60 * 60;
	printf("Year %d = Seconds %ud", year, seconds);
}
