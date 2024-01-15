#include<stdio.h>
#include<ctype.h>

int find_any(const char s1[], const char s2[]) {
	for (int i = 0; i < strlen(s1); i++)
	{
		for (int j = 0; j < strlen(s2); j++)
		{
			if (s1[i] == s2[j]) {
				return i;
			}
		}
	}
	return -1;
}

int main() {

	int index = find_any("Hello", "oe");
	if (index >= 0) {
		printf("There are matching symbols in position [%d]", index);
	}
	else {
		printf("There are no matching characters");
	}


	return 0;
}