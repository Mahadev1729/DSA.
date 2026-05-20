#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_set<char> st;
    string ans = "";

    for (char ch : s) {
        if (st.find(ch) == st.end()) {
            st.insert(ch);
            ans += ch;
        }
    }

    cout << ans;
    return 0;
}
