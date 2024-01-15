#include<iostream>
#include<cstring>
#include"String.h"

void ca::String::copy(const String& other) {
    str = new char[strlen(other.str) + 1];
    strcpy_s(str, strlen(other.str) + 1, other.str);
}

ca::String::String() {
    str = new char[1];
    str[0] = '\0';
}

ca::String::String(const char* s) {
    str = new char[strlen(s) + 1];
    strcpy_s(str, strlen(s) + 1, s);
}

String& ca::String::operator=(const String& other){
    
    if (this == &other) {
        return *this;
    }
    delete[] str;
    copy(other);
    return *this;
}

ca::String::String(const String& other) {
    copy(other);
}
ca::String::~String() {
    delete[] str;
}

const char* ca::String::c_str() const {
    return str;
}

char& ca::String::operator[](int c){
    return str[c];
}

bool ca::String::operator==(const String& other) const {
    return strcmp(str, other.str) == 0;
}

bool ca::String::operator!=(const String& other) const {
    return !(*this == other);
}

bool ca::String::operator>(const String& other) const {
    return strcmp(str, other.str) > 0;
}

bool ca::String::operator>=(const String& other) const {
    return strcmp(str, other.str) >= 0;
}

bool ca::String::operator<(const String& other) const {
    return strcmp(str, other.str) < 0;
}

bool ca::String::operator<=(const String& other) const {
    return strcmp(str, other.str) <= 0;
}