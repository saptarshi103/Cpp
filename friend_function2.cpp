#include <iostream>

class B;

class A {
private:
    int data;

public:
    A() : data(0) {}

    friend void displayData(const A&, const B&);
};

class B {
private:
    int data;

public:
    B() : data(0) {}

    friend void displayData(const A&, const B&);
};

void displayData(const A& objA, const B& objB) {
    std::cout << "Data in object A: " << objA.data << std::endl;
    std::cout << "Data in object B: " << objB.data << std::endl;
}

int main() {
    A objA;
    B objB;

    objA.data = 10;
    objB.data = 20;

    displayData(objA, objB);

    return 0;
}

