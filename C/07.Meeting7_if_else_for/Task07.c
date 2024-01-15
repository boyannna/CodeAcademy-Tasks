#include<stdio.h>
#include <ctype.h>

void squeeze(char s[], int c) {

	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == c) {
			s[i] = ' ';
		}
	}
}

int main() {

	char str[] = "Hello\n";
	squeeze(str, 'o');
	printf("%s", str); 

	return 0;
}