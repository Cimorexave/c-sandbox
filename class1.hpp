#include <iostream>
#include <cstring> // For strlen, strcpy, etc.

class my_string {
    private:
        char* data;
        size_t size;
    public:
    // constructors
    my_string() {
        data = new char[1];
        size = sizeof(data);
    } 
    my_string(const my_string& other) {
        data = new char[other.size];
        size = other.size;
    }

    // destructors
    ~my_string() {delete[] data;}
    // copy

    // operators

    // getter
    char* data() {
        char* temp = new char[size];
        memcpy(temp, data, size);
        return temp;
    }
};