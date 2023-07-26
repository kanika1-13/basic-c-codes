#include <iostream>
using namespace std;
class Complex {
public:
    int real, imag;
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }
    Complex operator-(const Complex& obj) const {
    return Complex(real - obj.real, imag - obj.imag);
}

};
int main() {
    int r1, i1, r2, i2;
    cout << "first complex no. : ";
    cin >> r1 >> i1;

    cout << "second complex no. : ";
    cin >> r2 >> i2;

    Complex c1(r1, i1), c2(r2, i2);
    Complex c3 = c1 - c2;

    cout << "First Complex Number: " << c1.real << " - " << c1.imag << "i" << endl;
    cout << "Second Complex Number: " << c2.real << " - " << c2.imag << "i" << endl;
    cout << "Subtraction: " << c3.real << " - " << c3.imag << "i" << endl;

    return 0;
}
