#include <iostream>
using namespace std;
class Box {
protected:
    float s1;
    float s2;
    
    float getAvg() {
        return (s1 + s2) / 2;
    }
public:
    void setAvg(float s1, float s2) {
        this->s1 = s1;
        this->s2 = s2;
    }
    
    void displayAverage() {
        cout << "Side 1: " << s1 << endl;
        cout << "Side 2: " << s2 << endl;
        
        float average = getAvg();
        cout << "Average: " << average << endl;
    }
};
class NamedBox : public Box {
private:
    string name;
    
public:
    void setName(string name) {
        this->name = name;
    }
    
    void displayAverageWithName() {
        cout << "Name: " << name << endl;
        displayAverage();
    }
};

int main() {
    NamedBox nb;
    
    float side1, side2;
    string name;
    
    cout << "Enter Side 1: ";
    cin >> side1;
    cout << "Enter Side 2: ";
    cin >> side2;
    cout << "Enter Name: ";
    cin >> name;
    
    nb.setAvg(side1, side2);
    nb.setName(name);
    
    nb.displayAverageWithName();
    
    return 0;
}
