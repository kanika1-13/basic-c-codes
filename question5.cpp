#include <iostream>
using namespace std;

class student {
    char name[50];
    double height;
    double weight;
    int rollno;

public:
    student() {
        cout << "Enter the Name of the student: ";
        cin >> name;
        cout << "Enter the RollNo of the student: ";
        cin >> rollno;
    }

    void display() {
        cout << "The Name of the student - " << name << endl;
        cout << "Roll no. of the student - " << rollno << endl;
        cout << "Height of the student - " << height << endl;
        cout << "Weight of the student - " << weight << endl;
    }
};

int main() {
    student s;
    s.display();
}