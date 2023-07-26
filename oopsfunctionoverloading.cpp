#include <iostream>
using namespace std;

class Adder {
public:
    int add(int num1, int num2) {
        return num1 + num2;
    }

    int add(int num1, int num2, int num3) {
        return num1 + num2 + num3;
    }
};

int main() {
    int num1, num2, num3; // Declare the variables

    cin >> num1;
    cin >> num2;
    cin >> num3;

    Adder adder;

    cout << adder.add(num1, num2) << endl;
    cout << adder.add(num1, num2, num3) << endl;

    // Perform calculations or function calls here if desired

    return 0;
}
