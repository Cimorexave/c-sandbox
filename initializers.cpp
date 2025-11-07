#include <iostream>
#include <initializer_list>

int main() {
    std::initializer_list<int> numbers = {1, 2, 3 ,4 , 5};
    auto numbers_copy = new int[numbers.size()];
    std::cout << "numbers: " << numbers.size() << std::endl;
    // std::cout << "numbers[0]: " << numbers << std::endl;
    int count = 0;
    for (const int& num : numbers) {
        numbers_copy[count++] = num;
        // std::cout << "number: " << num << std::endl;
    }
    // for (int num : numbers_copy) {
    //     std::cout << "number_Copy member: " << num << std::endl;
    // }
    
    return 0;
}

