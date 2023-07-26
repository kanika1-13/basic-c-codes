#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3; 
    cout << "Type the number: "; 
    cin >> n1;
    cout << "Type the number: "; 
    cin >> n2;
    cout << "Type the number: "; 
    cin >> n3;
    if (n1>n2 && n1>n3)
        cout << "largest number is " << n1;
    else if (n2>n1 && n2>n3)
        cout << "largest number is "<< n2;
    else
        cout << "largest number "<<n3;
        return 0;
}


