#include <iostream>

class MyClass {
private:
    int myNumber;

public:
    MyClass(int num) : myNumber(num) {}

    friend void printNumber(const MyClass &obj);
};

void printNumber(const MyClass &obj) {
    std::cout << "The number is: " << obj.myNumber << std::endl;
}

int main() {
    MyClass obj(42);
    printNumber(obj);
    return 0;
}

