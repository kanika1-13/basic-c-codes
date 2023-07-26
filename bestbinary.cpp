#include <iostream>
using namespace std;
int main (){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        char c = '0';
        for(int i=0;i<s.length();i++){
            if (s[i] == '?'){
                s[i] = c;
            }
            c = s[i];
        }
        cout << s << endl;

    }
}