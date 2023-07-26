#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main(){
    vector <int> v;
    for(int i=0;i<10;i++){
        int n;cin>>n;
        v.push_back(n);
    }
    sort(v.begin(),v.end());
    cout<<"Smallest:"<<v[9]<<endl;
    return 0;
}