#include <iostream>
#include <string>

using namespace std;

const int NUM_SUBJECTS = 3;

class Student {
private:
    string name;
    int marks[NUM_SUBJECTS];

public:
    Student(string studentName) : name(studentName) {}
    ~Student() {}

    void setMarks(int mark1, int mark2, int mark3) {
        marks[0] = mark1;
        marks[1] = mark2;
        marks[2] = mark3;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Marks: ";
        for (int i = 0; i < NUM_SUBJECTS; ++i) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

void displayStudentList(Student students[], int numStudents) {
    cout << "Student List:" << endl;
    for (int i = 0; i < numStudents; ++i) {
        students[i].displayDetails();
    }
}

int main() {
    const int NUM_STUDENTS = 3;
    Student students[NUM_STUDENTS] = { Student("omakr"), Student("pranav"), Student("yash") };

    students[0].setMarks(85, 90, 95);
    students[1].setMarks(75, 80, 85);
    students[2].setMarks(65, 70, 75);

    displayStudentList(students, NUM_STUDENTS);

    return 0;
}

