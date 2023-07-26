#include <iostream>
using namespace std;
class student{
int age;
string name;
public:
student(){
cout << "age" << endl;
cin >> age;
cout << "name" << endl;
cin >> name;
}
void display(){
    cout << name;
    cout << age;

}
};
int main (){
    student s;
    s.display();
}
