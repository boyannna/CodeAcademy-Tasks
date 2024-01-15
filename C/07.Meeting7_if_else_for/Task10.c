#include<stdio.h>
#include <ctype.h>

void toLower(char str[])
{
	// 1 VAR

	//for (int i = 0; i < strlen(str); i++)
	//{
	//	str[i] = tolower(str[i]);
	//}

	// 2 VAR

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 65 && str[i] <= 90) {
			str[i] += 32;
		}
	}
}

int main()
{
	char str[] = "HEllo, 123\n";
	toLower(str);
	printf("%s", str);

	return 0;
}