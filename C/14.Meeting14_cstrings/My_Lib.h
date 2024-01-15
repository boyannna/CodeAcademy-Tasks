#include<stdio.h>
#include<string.h>
#ifndef MY_LIB_H
#define MY_LIB_H

void printStr(const char* str);
void strReverse(char* str);
void appropriated(char* str, char* str2);
int isPalindrome(const char* str, const char* str2);
void calmify_str(char* str);
char* shortens(char* str);
int numberOfMeetings(const char* str, const char* c);
int search(const char* str, const char* str2);
int searchInTimes(const char* str, const char* str2);
int emailValidate(const char* str);
int countLines(const char* str);
int my_strcmp(const char* str, const char* str2);




#endif