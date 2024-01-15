#include<iostream>
#include<fstream>
#include<string>

void printToFile(const std::string str, std::ofstream& out) {
    out << str;
}

int main() {
    std::string str = "Hello, World!";
    
    std::ofstream out1("D:\\Codix курс\\OOP\\L03\\string.txt");
    printToFile(str, out1);
    out1.close();

    return 0;
}
