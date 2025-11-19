#include <bits/stdc++.h>
using namespace std;


bool isUnique(const string &sr) {
    unordered_map<char, int> freq;
    for (char c : sr) {
        freq[c]++;
        if (freq[c] > 1) {
            return false;
        }
    }
    return true;
}


int longest_substring_withoutrepeat(const string &s) {
    int maxLen = 0;  
    int n = s.size();

    for (int i = 0; i < n; i++) {
        string sub = "";
        for (int j = i; j < n; j++) {
            sub += s[j];  
            if (isUnique(sub)) {
                maxLen = max(maxLen, (int)sub.size());
            } else {
                break; 
            }
        }
    }
    return maxLen;
}

int main() {
    string s = "cadbzabcd";
    int res = longest_substring_withoutrepeat(s);
    cout << res; // Output: 5 ("cadbz")
    return 0;
}
