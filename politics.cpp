#include <iostream>
using namespace std;
int main(){
    int t,n,a;
    cin >> t;
    while(t--){
        cin >> n >>a;
        string s[n];
        int ans = n;
        for (int i = 0;i < n;i++){
            cin >> s[i];
            if (s[0] != s[i])
            ans--;
        }
        cout << ans << endl;

    }
}