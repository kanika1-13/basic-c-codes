#include <iostream>
using namespace std;
class employee{
    public:
    employee(){
    cout << "constructor" << endl;
    }
    ~employee(){
    cout<<"destructor"<<endl;
    }
};
int main(){
    employee e1;
    employee e2;
    return 0;
}