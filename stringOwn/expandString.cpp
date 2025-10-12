#include <bits/stdc++.h>
using namespace std;

// Function to shift every character by 1 (a→b, z→a)
string shiftString(string s) {
    for (char &c : s) {
        if (c == 'z') c = 'a';
        else c = c + 1;
    }
    return s;
}

int main() {
    string input;
    int k;

    cout << "Enter string: ";
    cin >> input;
    cout << "Enter k: ";
    cin >> k;

    string res = input;

    for (int i = 0; i < k; i++) {
        string shifted = shiftString(input);
        res += shifted;       
        input = shifted;    
    }

    cout << "Result: " << res << endl;

    return 0;
}
