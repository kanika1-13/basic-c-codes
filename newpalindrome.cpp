#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    while (n--){
        string s;
        cin >> s;
        s = s.substr(0,s.size()/2);
        sort(s.begin(),s.end());
        if(s[0] == s.back())
            cout << "NO" << endl;
        else
            cout << "YES" <<endl;
        }
    }

