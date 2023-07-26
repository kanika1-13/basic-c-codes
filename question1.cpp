#include <iostream>
#include <string>
using namespace std;

void input(string &name);
void input(int &id);
void output(string &name, int id);
int main()
{
    string name1, name2;
    int id1, id2;

    cout << "Name of student 1: ";
    input(name1);
    cout << "ID of student 1: ";
    input(id1);

    cout << "Name of  student 2: ";
    input(name2);
    cout << "ID of student 2: ";
    input(id2);

    cout << "Student 1 :" << endl;
    output(name1, id1);
    cout << "Student 2 :" << endl;
    output(name2, id2);

    return 0;
}
void input(string &name)
{
    cin >> name;
}
void input(int &id)
{
    cin >> id;
}
void output(string &name, int id)
{
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
}

