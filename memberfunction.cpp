#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int year;
    void print();
};

void Student::print() {
    cout << "The name is " << name << endl;
    cout << "The year is " << year << endl;
}

int main() {
    Student obj1;
    cout << "Enter name: ";
    cin >> obj1.name;
    cout << "Enter year: ";
    cin >> obj1.year;
    obj1.print();
    
    return 0;
}
