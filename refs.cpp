// Online C++ compiler to run C++ program online
#include <iostream>

void swap (int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
    return;
}

int main() {
    int value1 = 5;
    int& ref1 = value1;
    int value2 = value1;
    value2++;
    int& ref2 = value2;
    
    std::cout << "value1, value2:" << value1 << ", " << value2 << std::endl;
    std::cout << "value1 ad, value2 ad:" << &value1 << ", " << &value2 << std::endl;
    swap(value1, value2);
    std::cout << "value1, value2:" << value1 << ", " << value2 << std::endl;
    std::cout << "value1 ad, value2 ad:" << &value1 << ", " << &value2 << std::endl;
    
    return 0;
}

