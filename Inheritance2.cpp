#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    string name;

public:
    Animal(string animalName) : name(animalName) {}

    void speak() const {
        cout << "Animal " << name << " says something." << endl;
    }
};

class Dog : public Animal {
public:
    Dog(string dogName) : Animal(dogName) {}

    void speak() const {
        cout << "Dog " << name << " says Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    Cat(string catName) : Animal(catName) {}

    void speak() const {
        cout << "Cat " << name << " says Meow!" << endl;
    }
};

int main() {
    Animal genericAnimal("Generic");
    Dog myDog("Buddy");
    Cat myCat("Whiskers");

    cout << "Generic Animal:" << endl;
    genericAnimal.speak();
    cout << endl;

    cout << "My Dog:" << endl;
    myDog.speak();
    cout << endl;

    cout << "My Cat:" << endl;
    myCat.speak();

    return 0;
}

