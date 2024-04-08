#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:
    Car(string carBrand, string carModel, int carYear) : brand(carBrand), model(carModel), year(carYear) {}

    void displayDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }

    void drive() {
        cout << "Driving the " << year << " " << brand << " " << model << "." << endl;
    }
};

int main() {
    Car myCar("Toyota", "Corolla", 2022);
    Car friendCar("Honda", "Civic", 2020);

    cout << "My Car:" << endl;
    myCar.displayDetails();
    myCar.drive();
    cout << endl;

    cout << "Friend's Car:" << endl;
    friendCar.displayDetails();
    friendCar.drive();

    return 0;
}

