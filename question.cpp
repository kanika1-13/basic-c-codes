#include <iostream>
using namespace std;
class House {
protected:
    double l;
    double b;
public:
    void getDimensions() {
        cout << "Enter the length of the house: ";
        cin >> l;
        cout << "Enter the breadth of the house: ";
        cin >> b;
    }
    double calculateArea() {
        return l * b;
    }
};
class PaintedHouse : public House {
private:
    double cost;
public:
    PaintedHouse() {
        cost = 27.0;
    }
    double calculateTotalCost() {
        double area = calculateArea();
        return area * cost;
    }
};
int main() {
    PaintedHouse house;
    house.getDimensions();
    double totalCost = house.calculateTotalCost();
    cout << "The area of the house is: " << house.calculateArea() << " sq ft" << endl;
    cout << "The total cost of painting the house is: " << totalCost << endl;

    return 0;
}
