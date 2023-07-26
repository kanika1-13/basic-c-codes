#include <iostream>
using namespace std;
class box {
private:
    string name;
    float s1;
    float s2;
    float getavg() {
        return (s1 + s2) / 2;
    }
public:
    void setavg(float s1, float s2) {
        this ->s1 = s1;
        this ->s2 = s2;
    }

    void displayAverage() {
        cin >> s1;
        cin >> s2;
        cout << s1 << endl;
        cout << s2 << endl;
        this -> name = name;
        cin >> name;
        cout << "Name: " << name << endl;
        float average = getavg();
        cout << "Average: " << average << endl;
    }
};

int main() {
    box b;
    b.displayAverage();

    return 0;
}