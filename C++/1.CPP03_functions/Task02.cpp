#include<iostream>
#include<string>

void printToStcerr(const std::string& str = "Default Message") {
    std::cerr << str << std::endl;
}

int main() {
    std::string str = "Hello, World!";
    printToStcerr(str);
    printToStcerr();

    return 0;
}
