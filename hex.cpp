#include <bits/stdc++.h>
#include <string.h>
using namespace std;

class Number{
    public:
    int n;
    Number(int num){
        n=num;
    }

    void ToDec(){
        cout<<"The Decimal for the number is "<<n<<endl;
    }
    void ToHex(){
        cout<<"the hexadecimal for the number is "<<hex<<n<<endl;
    }
    void ToOct(){
        cout<<"the Octadecimal for the number is "<<oct<<n<<endl;
    }
};

int main(){
    int n1;cin>>n1;
    Number num1(n1);
    num1.ToDec();
    num1.ToHex();
    num1.ToOct();
    return 0;
}