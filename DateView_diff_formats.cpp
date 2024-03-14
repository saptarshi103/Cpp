#include <iostream>
#include <string>
using namespace std;

class Date {
    int day;
    int month;
    int year;
public:
    Date() {
        day = 1;
        month = 1;
        year = 2020;
    }
    Date(int a, int b, int c) {
        day = a;
        month = b;
        year = c;
    }
    void display() {
        cout << day << "-" << month << "-" << year << endl;
    }
    void mon() {
        string str[] = {" ", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        cout << day << " " << str[month] << " " << year << endl;
    }
    void getdata() {
        cout << "Enter the date (day month year): ";
        cin >> day >> month >> year;
    }
    void setdata(int a, int b, int c) {
        day = a;
        month = b;
        year = c;
    }
    int getDay() { return day; }
    int getMonth() { return month; }
    int getYear() { return year; }
};

int main() {
    Date d1;
    
    d1.getdata(); 
    

    cout << "Displaying in dd-mm-yyyy format: ";
    d1.display();
    
    cout << "Displaying in dd/mm/yyyy format: ";
    cout << d1.getDay() << "/" << d1.getMonth() << "/" << d1.getYear() << endl;
    
    cout << "Displaying in dd Mon yyyy format: ";
    d1.mon();
    
    return 0;
}

