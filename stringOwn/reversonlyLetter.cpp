#include <bits/stdc++.h>
using namespace std;

// input : "ab-cd"
// output: "dc-ba"

string solve(string s) {
    stack<char> st;

   
    for (char c : s) {
        if (isalpha(c)) {
            st.push(c);
        }
    }

    
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            s[i] = st.top();
            st.pop();
        }
    }

    return s;
}

int main() {
    string s = "ab-cd";
    cout << solve(s);
    return 0;
}
