#include <iostream>
using namespace std;
class rect {
    int x , y;
    public:
    rect(int a , int b){
        x = a;
        y = b;
    }

    int area (){
        return x*y;
    }
};
    int main (){
        int a , b;
        cin >> a;
        cin  >> b;
        rect obj1(a,b);
        cout << " rect area " << obj1.area();
        return 0;
    }
