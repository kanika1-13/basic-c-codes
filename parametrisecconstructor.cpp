#include <iostream>
#include <cstring>
using namespace std;
class student {
    int rno;
    char name[50];
    double fee;
public:
    student(int, const char[], double);
    void display();
};
student::student(int no, const char n[], double f) {
    rno = no;
    strcpy(name, n);
    fee = f;
}
void student::display() {
    cout << endl << rno << "\t" << name << "\t" << fee;
}

int main() {
    int rollNo;
    char studentName[50];
    double studentFee;

    cout << "Enter Roll No: ";
    cin >> rollNo;
    cout << "Enter Name: ";
    cin >> studentName;
    cout << "Enter Fee: ";
    cin >> studentFee;

    student s(rollNo, studentName, studentFee);
    s.display();

    return 0;
}
