#include<bits/stdc++.h>
using namespace std;

bool is_Valid_Parenthisis(string s) {
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        char ch = s[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } else {
            if (!st.empty()) {
                char top = st.top();

                if ((ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '[')) {

                    st.pop();
                } else {
                    return false;
                }
            } else {
                return false;
            }
        }
    }
    return st.empty();
}

int main() {
    string input = "{([])}";
    bool res = is_Valid_Parenthisis(input);
    cout << res;
    return 0;
}
