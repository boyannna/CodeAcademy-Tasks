#include<stdio.h>
#include <ctype.h>

void replace(char* str, int oldChar, int newChar) {

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == oldChar) {
			str[i] = newChar;
		}
	}
}

int main() {

	char str[] = "Hello\n";
	replace(str, 'e', '3'); // "H3llo\n"
	printf("%s", str);
	return 0;
}