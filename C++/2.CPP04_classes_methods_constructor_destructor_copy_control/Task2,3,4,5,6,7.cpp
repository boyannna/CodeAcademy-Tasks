#include<iostream>
#include<cstring>

namespace ca {
    class string {
    private:
        char* str;
        void copy(const string& other) {
            str = new char[strlen(other.str) + 1];
            strcpy_s(str, strlen(other.str) + 1, other.str);
        }

    public:
        string() {
            str = new char[1];
            str[0] = '\0';
        }

        string(const char* s) {
            str = new char[strlen(s) + 1];
            strcpy_s(str, strlen(s) + 1, s);
        }

        string& operator=(const string& other) {
            if (this == &other) {
                return *this;
            }
            delete[] str;
            copy(other);
            return *this;
        }

        string(const string& other) {
            copy(other);
        }

        ~string() {
            delete[] str;
        }

        const char* c_str() const {
            return str;
        }
    };
}

int main() {
    ca::string str1("Hello");
    ca::string str2("World");

    str2 = str1; 

    if (strcmp(str1.c_str(), str2.c_str()) == 0) {
        std::cout << "str1 and str2 are equal" << std::endl;
    }
    else {
        std::cout << "str1 and str2 are not equal" << std::endl;
    }

    ca::string str3(str1); 
    if (strcmp(str1.c_str(), str3.c_str()) == 0) {
        std::cout << "str1 and str3 are equal" << std::endl;
    }
    else {
        std::cout << "str1 and str3 are not equal" << std::endl;
    }

    return 0;
}