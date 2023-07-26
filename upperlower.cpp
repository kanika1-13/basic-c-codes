#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main(){
    char ch;cin>>ch;
    if(0<=ch-'0'&& ch-'0'<=9){
        cout<<"it is a number"<<endl;
    }else if(0<=ch-'a'&& ch-'a'<=25){
        cout<<"it is in lowercase"<<endl;
    }else{
        cout<<"it is in uppercase"<<endl;
    }
    return 0;
}