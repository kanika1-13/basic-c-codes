#include<iostream>
using namespace std;
int main(){
    char a;
    cout << "Type the letter ";
    cin >> a;
    char ch = toupper(a);
    cout << "The uppercase is " << ch;
}