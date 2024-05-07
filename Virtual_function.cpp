#include <iostream>

class Animal {
public:
    virtual void sound() {
        std::cout << "Animal makes a sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        std::cout << "Dog barks" << std::endl;
    }
};

int main() {
    Animal* animalPtr;
    Animal animal;
    Dog dog;

    animalPtr = &dog;

    animalPtr->sound(); 

    return 0;
}

