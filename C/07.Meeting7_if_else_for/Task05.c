#include<stdio.h>
#include<ctype.h>

void reverseString(char str[]) {

	for (int i = 0, j = strlen(str) - 1; i < j; i++, j--) {
		int temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}

void itoa(int n, char s[]) {
	do {
		int counter = 0;
		s[counter] = n % 10;
		n /= 10;
		counter++;
		printf("%d", n);

	} while (n <= 0);
	printf("%s", s);

}

int main() {
	
	int number = 123;
	char str[] = "";
	itoa(number,str);
	printf("%s", str);

	return 0;
}