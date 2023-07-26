#include <iostream>
using namespace std;
class Animal{
    public:
        int m = 5 ;
        void eat(){ 
            cout << "m = " << m << endl;
            cout << "hello" << endl;
        }
};
class Dog : public Animal{
    public:
        int n = 2;
        void bark(){
            cout << "m = " << m << endl;
            cout << "n = " << n << endl;
            cout << "hi " << endl;
        }
};
class Eat : public Dog{
    public:
        int y = 0;
        void print(){
            cout << "m = " << m << endl;
            cout << "n = " << n << endl;
            cout << " y = " << y << endl;
            cout << "hey " << endl;
        }
};
int main (){
    Eat obj1;
    obj1.eat();
    obj1.bark();
    obj1.print();
}
