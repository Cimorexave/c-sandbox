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
    
      
    std::cout << "init." << std::endl;
    c1 instance_c1 = {1,2,3};
    for (int i = 0; i < instance_c1.size(); i++) {
        std::cout << "c1 at" << i << instance_c1.data()[i] << std::endl;
    }

    return 0;
}

class c1 {
    public:
    int* _data;
    size_t _size;
    c1(std::initializer_list<int> numbers) : _size(numbers.size()) {
        int i = 0;
        _data = new int[numbers.size()];
        for (const int& number : numbers) {
            _data[i++] = number;
        }
    }
    int* data() {return _data;}
    int size() {return _size;}
};
