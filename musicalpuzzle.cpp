#include <bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<string>s1;
        for(int i = 0; i<n-1 ; i++){
            string k = "";
            k += s[i];
            k += s[i+1];
            s1.insert(k);
        }
        cout <<s1.size()<<endl;
    }
}