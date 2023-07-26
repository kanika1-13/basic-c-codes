#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> vec;
    for (int i = 0; i < 3; i++) {
        int d;
        cin >> d;
        vec.push_back(d);
    }
    sort(vec.begin(), vec.end());
    cout << vec[2] << endl;
    return 0;
}
