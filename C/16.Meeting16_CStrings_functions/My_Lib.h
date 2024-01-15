#ifndef MY_LIB_H
#define MY_LIB_H
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void print(char* str);

char* my_strcpy(char* dest, const char* src);
char* my_strncpy(char* dest, const char* src, size_t count);
char* my_strcat(char* dest, const char* src);
char* my_strncat(char* dest, const char* src, size_t count);
int my_strncmp(const char* lhs, const char* rhs, size_t count);
char* my_strstr(const char* str, const char* substr);
char* extract_substr(const char* str, size_t idx_from, size_t idx_to, char result[]);
bool isSorted(const char* str[]);
void print_str_tokens(char* str, const char* delimiters);


#endif