#include <iostream>

int age = 1;

namespace ca {
    int age = 2;
    namespace cpp {
        int age = 3;
        struct Person {
            int age = 4;

            Person() {
                int age = 5;

                std::cout << age << this->age << cpp::age << ca::age << ::age << std::endl;
            }
        };
    }
}

int main() {
    ca::cpp::Person p;
    return 0;
}
