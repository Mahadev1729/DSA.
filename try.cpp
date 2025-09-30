#include <bits/stdc++.h>
using namespace std;

string expand(const string &s) {
    string res;
    for (char ch : s) {
        char next = (ch == 'z' ? 'a' : ch + 1); // wrap if needed
        res.push_back(next);
    }
    return s + res; // original + shifted
}

char getKthChar(string s, int k) {
    while ((int)s.size() < k) {
        s = expand(s);
    }
    return s[k-1]; // 0-based index
}

int main() {
    string input = "a";
    int k = 3;
    cout << "The " << k << "rd character is: " << getKthChar(input, k) << endl;
    return 0;
}
