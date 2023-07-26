#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    // Getter function to retrieve the width
    int getWidth() {
        return width;
    }

    // Setter function to set the width
    void setWidth(int newWidth) {
        if (newWidth >= 0) {
            width = newWidth;
        } else {
            cout << "Invalid width. Setting width to 0." << endl;
            width = 0;
        }
    }

    // Getter function to retrieve the height
    int getHeight() {
        return height;
    }

    // Setter function to set the height
    void setHeight(int newHeight) {
        if (newHeight >= 0) {
            height = newHeight;
        } else {
            cout << "Invalid height. Setting height to 0." << endl;
            height = 0;
        }
    }
};

int main() {
    Rectangle rect;
    int width, height;
    cout << "Enter width: ";
    cin >> width;
    rect.setWidth(width);
    cout << "Enter height: ";
    cin >> height;
    rect.setHeight(height);
    cout << "Width: " << rect.getWidth() << endl;
    cout << "Height: " << rect.getHeight() << endl;

    return 0;
}
