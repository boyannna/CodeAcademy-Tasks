//Задача 13. Ако имаме символен низ char str[] = “HELLO”, заменете
//всичките символи с главна буква със съответните символи с малка
//буква.

#include<stdio.h>
#include <ctype.h>

void highToLow(char* str) {
	for (int i = 0; i < strlen(str); i++)
	{
		str[i] = tolower(str[i]);
	}
}

int main() {

	char str[] = "HELLO";
	char str2[] = "Boyanna";

	highToLow(str);
	highToLow(str2);

	printf("The new string is: %s \n", str);
	printf("The new string is: %s ", str2);

	return 0;
}