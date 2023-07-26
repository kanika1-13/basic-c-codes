#include <bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin >> t;
    while (t--){  string s;
    cin>>s;
    string s1;
    s1= s;
    sort(s.begin(),s.end());
    if (s == s1)
        cout << "-1" << endl;
    else 
        cout << s.size()-1 << endl;
    }
}