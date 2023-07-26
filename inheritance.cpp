#include <iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout << " i can eat " << endl;
    }
    void bark(){
        cout << "i want to bark"<<endl;
    }
};
class Dog : public Animal { 
    public:
    void sleep(){
        cout << " i want to sleep" <<endl;
    }
};
int main(){
Dog dog1;
dog1.eat();
dog1.bark();
dog1.sleep();
}