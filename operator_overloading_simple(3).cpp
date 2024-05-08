#include <iostream>

class Number {
private:
    int value;

public:
    Number(int v) : value(v) {}

    Number operator+(const Number& other) const {
        return Number(value - other.value);
    }
};

int main() {
    Number num1(10);
    Number num2(5);
    Number result = num1 + num2;
    std::cout << "Result: " << result << std::endl;
    return 0;
}

