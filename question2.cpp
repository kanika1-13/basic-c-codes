#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to generate all permutations of a given code
vector<string> generatePermutations(const string& code) {
    vector<string> permutations;
    string tempCode = code;

    do {
        permutations.push_back(tempCode);
    } while (next_permutation(tempCode.begin(), tempCode.end()));

    return permutations;
}

int main() {
    string code1, code2;
    int y;

    cout << "four digit no.1: ";
    cin >> code1;

    cout << "four digit no.2: ";
    cin >> code2;

    cout << "encrypted code: ";
    cin >> y;

    // Check if the input codes are valid
    if (code1.length() != 4 || code2.length() != 4) {
        cout << "Invalid input. Please enter 4-digit codes.\n";
        return 0;
    }

    vector<string> permutations1 = generatePermutations(code1);
    vector<string> permutations2 = generatePermutations(code2);

    bool combinationFound = false;
    string matchedCode1, matchedCode2;

    for (const string& perm1 : permutations1) {
        for (const string& perm2 : permutations2) {
            int product = stoi(perm1) * stoi(perm2);
            if (product == y) {
                combinationFound = true;
                matchedCode1 = perm1;
                matchedCode2 = perm2;
                break;
            }
        }
        if (combinationFound) {
            break;
        }
    }

    if (combinationFound) {
        cout << "Combination found: A=" << matchedCode1 << " and B=" << matchedCode2 << " = " << y << endl;
    } else {
        cout << "No arrangement" << endl;
    }

    return 0;
}
