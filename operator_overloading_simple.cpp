#include <iostream>

class MyNumber {
private:
    int value;

public:
    MyNumber(int val = 0) : value(val) {}

    MyNumber operator+(const MyNumber& other) const {
        return MyNumber(value + other.value);
    }

    MyNumber operator-(const MyNumber& other) const {
        return MyNumber(value - other.value);
    }

    friend std::ostream& operator<<(std::ostream& os, const MyNumber& number) {
        os << number.value;
        return os;
    }
};

int main() {
    MyNumber a(5);
    MyNumber b(3);

    MyNumber sum = a + b;
    MyNumber difference = a - b;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "a + b = " << sum << std::endl;
    std::cout << "a - b = " << difference << std::endl;

    return 0;
}

