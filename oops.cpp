#include <iostream>
using namespace std;
class Triangle {
protected:
    double sides[3];
public:
    Triangle(double s1, double s2, double s3) {
        sides[0] = s1;
        sides[1] = s2;
        sides[2] = s3;
    }
    bool isIsosceles() {
        return (sides[0] == sides[1]) || (sides[0] == sides[2]) || (sides[1] == sides[2]);
    }
};
class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(double s1, double s2, double s3)
        : Triangle(s1, s2, s3) {}
};
int main() {
    double sides[3];
    cout << "Enter the lengths of the triangle's sides:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "Side " << (i + 1) << ": ";
        cin >> sides[i];
    }
    IsoscelesTriangle triangle(sides[0], sides[1], sides[2]);
    if (triangle.isIsosceles()) {
        cout << "The triangle is isosceles." << endl;
    } else {
        cout << "The triangle is not isosceles." << endl;
    }
    return 0;
}
