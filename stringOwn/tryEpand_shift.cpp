#include <bits/stdc++.h>
using namespace std;

string shift_string(string s) {
    for (auto &c : s) {
        if (c == 'z') c = 'a';
        else c = c + 1;
    }
    return s;
}

string expand_string(string input_string, int k) {
    string res = input_string;
    for (int i = 0; i < k; i++) {
        string shifted = shift_string(input_string);
        res += shifted;
        input_string = shifted;
    }
    return res;
}

int main() {
    string str = "a";
    int k = 3;
    string res = expand_string(str, k);
    cout << res;
    return 0;
}
