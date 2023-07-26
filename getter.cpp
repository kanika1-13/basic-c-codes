#include <iostream>
using namespace std;
class Student {
private:
    int rollno;
    string name;
    int marks;
    char grade;
public:
    void setData(int studentRollNo, string studentName, int studentMarks) {
        rollno = studentRollNo;
        name = studentName;
        marks = studentMarks;
        setGrade();
    }
    void setGrade() {
        if (marks > 30)
            grade = 'P';
        else
            grade = 'F';
    }
    void displayData() {
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
    }
};
int main() {
    int rollno;
    string name;
    int marks;

    cout << "Enter roll number: ";
    cin >> rollno;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter marks: ";
    cin >> marks;

    Student student;
    student.setData(rollno, name, marks);
    student.displayData();

    return 0;
}
