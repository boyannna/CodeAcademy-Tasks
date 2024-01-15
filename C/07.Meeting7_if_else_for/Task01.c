#include<stdio.h>
#include <stdlib.h>

unsigned ParseUnsignedLiteral(char* str, int base) {

	//printf("%d base %d\n", (int)str, base);
	int str2 = 0;
	str2 = atoi(str);
	//int str2 = (int)str;

	//printf("%d", str2);
	int i = 0;
	for (int i = strlen(str) - 1; i = 0; i--) {
		if (i > 0) {
			return  str[i] * 2 ^ i + ParseUnsignedLiteral(str2, base);
		}
		else {
			return 0;
		}
	}
}

int main() {

	//unsigned u = ParseUnsignedLiteral("0011", 2);
	//unsigned u2 = ParseUnsignedLiteral("12345670", 8);
	//unsigned u3 = ParseUnsignedLiteral("876543210", 9);
	//unsigned u4 = ParseUnsignedLiteral("9876543210", 10);

	printf("%d",ParseUnsignedLiteral("0011", 2) );

	return 0;

}


