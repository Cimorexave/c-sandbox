#include <iostream>

int main() {
    int value1 = 5;
    int& ref = value1;
    std::cout << "ref:" << &ref << std::endl;
    int value2 = value1;
    value2++;
    std::cout << "ref:" << ref << std::endl;
    return 0;
}