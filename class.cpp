#include <iostream>
using namespace std;
class Student {
public:
    string name;
    int age;
    bool gender;

    void printInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << (gender ? "Male" : "Female") << endl;
    }
};

int main() {
    Student arr[3];
    for (int i = 0; i < 3; i++) {
        cout << "Enter name: ";
        cin >> arr[i].name;
        cout << "Enter age: ";
        cin >> arr[i].age;
        cout << "Enter gender (0 for female, 1 for male): ";
        cin >> arr[i].gender;
    }
    for (int i = 0; i < 3; i++) {
        arr[i].printInfo();
    }

    return 0;
}
