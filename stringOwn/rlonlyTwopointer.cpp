#include <bits/stdc++.h>
using namespace std;

// input : "a-bc=dEf!"
// output: "f-Ed=cba"

string solve(string s) {
    int l = 0;
    int r = s.length() - 1;

    while (l < r) {
        if (isalpha(s[l]) && isalpha(s[r])) {
            swap(s[l], s[r]);
            l++;
            r--;
        } 
        else if (!isalpha(s[l])) {
            l++;
        } 
        else {
            r--;
        }
    }
    return s;
}

int main() {
    string s = "a-bc=dEf!";
    cout << solve(s);
    return 0;
}
