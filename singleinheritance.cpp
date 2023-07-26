#include <iostream>
using namespace std;
class Animal {
    public:
    void eat(){
        cout << "eating" << endl;
    }
};
class Dog : public Animal{
    public:
        void bark(){
            cout << "hello" << endl;
    }
};
int main(){
    Dog obj1;
    obj1.eat();
    obj1.bark();
}