#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++) {
        int d;
        cin >> d;
        vec.push_back(d);
    }
    sort(vec.begin(), vec.end());
    for (int i = n - 1; i >= 0; i--) {
        cout << vec[i] << " ";
    }
    cout << endl;
    return 0;
}
