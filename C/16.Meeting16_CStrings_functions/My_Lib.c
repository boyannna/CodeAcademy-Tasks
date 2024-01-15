#include"My_Lib.h"

void print(char* str) {

	for (int i = 0; str[i] != '\0' ; i++) {
		printf("%c", str[i]);
	}
	printf("\n");
}
//Task 1
char* my_strcpy(char* dest, const char* src) {

	for (int i = 0; dest[i] != '\0' && src[i] != '\0'; i++) {
		dest[i] = src[i];
	}
	return dest;
}
//Task 2
 
//To do
char* my_strncpy(char* dest, const char* src, size_t count) {

	for (int i = 0; dest[i] != '\0' && src[i] != '\0'; i++) {
		dest[i] = src[i];
	}
	return dest;
}

//Task 3
char* my_strcat(char* dest, const char* src) {
	int lenght = strlen(dest);
	int index = 0;
	while (src[index] != '\0') {

		dest[lenght] = src[index];
		++lenght;
		++index;

	}
	dest[lenght] = '\0';
	return dest;
}
//Task 4
char* my_strncat(char* dest, const char* src, size_t count) {

	int lenght = strlen(dest);
	int index = 0;
	while (count != 0) {

		dest[lenght] = src[index];
		++lenght;
		++index;
		--count;

	}
	dest[lenght] = '\0';
	return dest;
}
//Task 5
int my_strncmp(const char* lhs, const char* rhs, size_t count) {

	for (int i = 0; i < count ; i++) {
		if (lhs[i] != rhs[i]) {
			return false;
		}
	}
	return true;
}
//Task 6 
char* my_strstr(const char* str, const char* substr){
	int counter = 0;
	int n = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == substr[n]) {
			n++;
			++counter;
		}
	}

	int length = strlen(substr);

	if (counter == length) {
		return substr;
	}
	else {
		return 0;
	}
	
}

//Task 8 
char* extract_substr(const char* str, size_t idx_from, size_t idx_to, char result[]) {
	int length = strlen(str);
	if (length - 1 < idx_to) {
		return result;
	}
	else {
		int index = 0;
		for (int i = idx_from; i <= idx_to; i++) {
			result[index] = str[i];
			index++;
		}
		result[index] = '\0';
	}
	return result;
}

//Task 9
bool isSorted(const char* str[]) {
	int length = strlen(str);
	char* temp;
	char* temp2;
	for (int i = 0; i < length; i++) {
		if (length == 1) {
			return true;
		}
		else if (i + 1 < length) {
			temp = str[i];
			temp2 = str[i + 1];
			for (int j = 0; temp[j] != '\0'; j++) {
				if (temp[j] > temp2[j]) {
					return false;
				}
			}
		}
		else {
			temp = str[i-1];
			temp2 = str[i];
			for (int j = 0; temp[j] != '\0'; j++) {
				if (temp[j] > temp2[j]) {
					return false;
				}
			}
		}
	}
	return true;
}

//Task 10
void print_str_tokens(char* str, const char* delimiters) {
	
	char token[64] = "";
	for (int i = 0; i < strlen(str); i++) {
		char c = str[i];
		if (strchr(delimiters, c) != NULL) {
			printf("%s\n", token);
			token[0] = '\0';
		}
		else {
			int len = strlen(token);
			token[len] = c;
			token[len + 1] = '\0';
		}
	}
	if (strlen(token) > 0) {
		printf("%s\n", token);
	}
}
