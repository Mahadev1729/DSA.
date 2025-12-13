#include <bits/stdc++.h>
using namespace std;

string solve(const string &s) {
    int n = s.size();
    if (n == 0) return "";

    string res = "";
    int count = 1;

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            count++;
        } else {
            res += s[i - 1];
            res += to_string(count);
            count = 1;
        }
    }

    // Add last group
    res += s[n - 1];
    res += to_string(count);

    return (res.length() >= s.length()) ? s : res;
}

int main() {
    string n = "66623311";
    string res = solve(n);
    cout << res;
    return 0;
}
