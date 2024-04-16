#include <iostream>

using namespace std;

class Shape {
public:
    virtual void display() const {
        cout << "This is a shape." << endl;
    }
};

class Rectangle : public Shape {
public:
    void display() const override {
        cout << "This is a rectangle." << endl;
    }
};

class Circle : public Shape {
public:
    void display() const override {
        cout << "This is a circle." << endl;
    }
};

int main() {
    Shape shape;
    Rectangle rectangle;
    Circle circle;

    shape.display();
    rectangle.display();
    circle.display();

    return 0;
}

