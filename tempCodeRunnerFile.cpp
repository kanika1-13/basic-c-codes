#include <iostream>
using namespace std;

class Student {
    int rollno;
    string name;
    int marks;
    char grade;

public:
    int getRollNo() {
        return rollno;
    }

    string getName() {
        return name;
    }

    int getMarks() {
        return marks;
    }

    char getGrade() {
        return grade;
    }

    void setGrade() {
        if (marks > 30)
            grade = 'P';
        else
            grade = 'F';
    }
};

int main() {
    string name;
    int marks;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter marks: ";
    cin >> marks;

    // Create a Student object
    Student student;

    // Assign the entered values to the Student object
    student.setName(name);
    student.setMarks(marks);

    // Calculate and set the grade for the student
    student.setGrade();

    // Get the values from the Student object
    string studentName = student.getName();
    int studentMarks = student.getMarks();
    char studentGrade = student.getGrade();

    cout << "Student name: " << studentName << endl;
    cout << "Student marks: " << studentMarks << endl;
    cout << "Student grade: " << studentGrade << endl;

    return 0;
}
