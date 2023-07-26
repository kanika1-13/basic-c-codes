#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x01 = 1e9, x10 = 1e9, x11 = 1e9;
        for (int i = 0; i < n; i++) {
            int a;
            string x;
            cin >> a >> x;
            if (x == "11")
                x11 = min(x11, a);
            else if (x == "01")
                x01 = min(x01, a);
            else if (x == "10")
                x10 = min(x10, a);
        }
        if (min(x11, x01 + x10) >= 1e9)
            cout << "-1" << endl;
        else
            cout << min(x11, x01 + x10) << endl;
    }
}

