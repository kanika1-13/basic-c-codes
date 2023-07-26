#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long c;cin>>c;
    int a,b;cin>>a>>b;
    vector <int> a1;
    vector <int> b1;
    for(int i=0;i<4;i++){
        a1.push_back(a%10);
        b1.push_back(b%10);
        a/=10;
        b/=10;
    }
    vector <int> a_code;
    vector <int> b_code;
    sort(a1.begin(),a1.end());
    sort(b1.begin(),b1.end());
    do {
        a_code.push_back(a1[0]*1000 + a1[1]*100 +a1[2]*10+a1[3]);
    } while (next_permutation(a1.begin(), a1.end()));


    do {
        b_code.push_back(b1[0]*1000 + b1[1]*100 +b1[2]*10+b1[3]);
    } while (next_permutation(b1.begin(), b1.end()));


    for(int i=0;i<a_code.size();i++){
        for(int j=0;j<b_code.size();j++){
            if(a_code[i]*b_code[j]==c){
                cout<<"a: "<<a_code[i]<<" b: "<<b_code[j]<<endl;
            }
        }
    }
   
    return 0;
}