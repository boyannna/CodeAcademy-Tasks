#include<stdio.h>
#include<ctype.h>

void reverseString(char str[]) {

	for (int i = 0, j = strlen(str) - 1; i < j; i++, j--) {
		int temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}

int main() {
	char str[] = "Hello";
	reverseString(str); // "\nolleH"
	printf("%s", str);
	
	return 0;
}