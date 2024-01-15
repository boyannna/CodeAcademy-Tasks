#include<stdio.h>
#include<ctype.h>

void squeeze(char s1[], const char s2[]) {
	for (int i = 0; i < strlen(s1); i++)
	{
		for (int j = 0; j < strlen(s2); j++)
		{
			if (s1[i] == s2[j]) {
				s1[i] = ' ';
			}
		}
	}
}

int main() {

	char str[] = "Hello\n";
	squeeze(str, "Hl");
	printf("%s", str); 

	return 0;
}