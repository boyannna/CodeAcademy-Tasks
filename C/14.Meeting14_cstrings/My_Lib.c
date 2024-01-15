#include"My_Lib.h"

void printStr(const char* str) {
	printf("The string is: ");
	for (int i = 0; i < strlen(str); i++) {
		printf("%c", str[i]);
	}
	printf("\n");
}
//Task 1
void strReverse(char* str) {
	for (int i = 0, j = strlen(str) - 1; i < j; i++, j--) {
		char* temp = *(str + i);
		*(str + i) = *(str + j);
		*(str + j) = temp;
	}
}
//Task 2
int isPalindrome(const char* str, const char* str2) {

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] != str2[i]) {
			return 0;
		}
	}
	return 1;
}
//Task 3
void calmify_str(char* str) {
	//
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= 32;
		}
		else if (str[i] == '.') {
			str[i] = '!';
		}
	}
}
//Task 4
char* shortens(char* str) {

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] != ' ') {
			str[i] != '\0';
			return;
		}
	}
}
//Task 5
int numberOfMeetings(const char* str, const char* c) {
	int counter = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == c) {
			counter++;
		}
	}
	return counter;
}
//Task 6
int search(const char* str, const char* str2) {
	int index = 0;
	int strLength = strlen(str);
	int str2Length = strlen(str2);

	for (int i = 0; i < strLength; i++) {

		if (str[i] == str2[index] && str[i] != '\0' && str2[index] != '\0') {
			index++;
			if (index == str2Length) {
				return i - index + 1;
			}
		}
	}
	return -1;
}
//Task 7
int searchInTimes(const char* str, const char* str2) {
	int times = 0;
	int index = 0;
	int strLength = strlen(str);
	int str2Length = strlen(str2);

	for (int i = 0; i < strLength; i++) {

		if (str[i] == str2[index] && str[i] != '\0' && str2[index] != '\0') {
			index++;
			if (index == str2Length) {
				times++;
				index = 0;
			}
		}
	}
	return times;
}
//Task 8
int emailValidate(const char* str) {

	char index = "";
	int number = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (i == 0 && str[i] == '@') {
			return 0;
		}
		else if (str[i] == '@') {
			number++;
			index = '@';
		}
		else if (str[i] == '.' && index == '@') {
			number++;
		}
	}

	if (number >= 2) {
		return 1;
	}
	else {
		return 0;
	}
}
//Task 9
int countLines(const char* str) {
	int counter = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == '.') {
			counter++;
		}
	}
	return counter;
}
//Task 10
int my_strcmp(const char* str, const char* str2) {
	int counter = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] != str2[i]) {
			if (str[i] > str2[i])
			{
				return 1;
			}
			else {
				return -1;
			}
		}
	}
	return 0;
}