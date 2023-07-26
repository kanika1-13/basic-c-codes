#include <bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string s,s1;
        cin >> s;
        int i = 0;
        while (i < n){
            int j = i + 1;
            while (s[j] != s[i])
                j++;
            s1 += s[j];
            i = j+1;
        }
        cout << s1<<endl;
        }
}