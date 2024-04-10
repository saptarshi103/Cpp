#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }

    double perimeter() const override {
        return 2 * (length + width);
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * radius * radius;
    }

    double perimeter() const override {
        return 2 * M_PI * radius;
    }
};

int main() {
    Rectangle rect(5, 4);
    Circle circle(3);

    cout << "Rectangle:" << endl;
    cout << "Area: " << rect.area() << endl;
    cout << "Perimeter: " << rect.perimeter() << endl;

    cout << "\nCircle:" << endl;
    cout << "Area: " << circle.area() << endl;
    cout << "Circumference: " << circle.perimeter() << endl;

    return 0;
}

