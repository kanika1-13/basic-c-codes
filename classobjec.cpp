#include <iostream>
using namespace std;
class car {
public:
    int year;
    string model;
    string brand;
};
int main() {
    car obj1;
    cout << "Enter the year: ";
    cin >> obj1.year;
    cout << "Enter the car: ";
    cin >> obj1.model;
    cout << "Enter the brand: ";
    cin >> obj1.brand;
    cout << "the year is " << obj1.year <<endl;
    cout << "the car is " << obj1.model << endl;
    cout << "the brand is " <<obj1.brand << endl;
    return 0;
}
