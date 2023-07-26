#include <iostream>
using namespace std;

int add(int num1, int num2) {
    return num1 + num2;
}

int add(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

int main() {
    int num1, num2, num3; // Declare the variables

    cin >> num1;
    cin >> num2;
    cin >> num3;
    cout << add(num1,num2);
    cout << add(num1,num2,num3);

    // Perform calculations or function calls here if desired

    return 0;
}
