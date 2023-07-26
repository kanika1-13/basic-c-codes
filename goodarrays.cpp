#include <iostream>
using namespace std;
int main (){
    int t;
    cin >> t;
    while (t--){
        int n , k = 0,b =0;
        cin >> n;
        for (int i = 0; i < n;i++){
            int a;
            cin >> a;
            if (i>0 && a%2 == b%2)
                k++;
                b = a;
        }
        cout << k << "\n";
    }
}