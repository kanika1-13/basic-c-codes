#include <iostream>
using namespace std;
class student{
    public:
        string name;
        int year;
    void print(){
        cout << "the name is " << name << endl; 
        cout << "the year is " << year <<endl;
    }
};
int main (){
    student obj1;
    cout << " name ";
    cin >>obj1.name; 
    cout <<  " year ";
    cin >> obj1.year;
    obj1.print();
}