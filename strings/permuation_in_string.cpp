#include <bits/stdc++.h>
using namespace std;

bool isFreqSame(vector<int>& a, vector<int>& b) {
    for (int i = 0; i < 26; i++)
        if (a[i] != b[i]) return false;
    return true;
}

bool is_permutation(string s1, string s2) {
    if (s1.size() > s2.size()) return false;

    vector<int> freq1(26, 0), freq2(26, 0);

    for (char c : s1) freq1[c - 'a']++;

    int w = s1.size();

    for (int i = 0; i < w; i++)
        freq2[s2[i] - 'a']++;

    // if (isFreqSame(freq1, freq2)) return true;

    for (int i = w; i < s2.size(); i++) {
        freq2[s2[i] - 'a']++;
        freq2[s2[i - w] - 'a']--;
        if (isFreqSame(freq1, freq2))
            return true;
    }

    return false;
}

int main() {
    string s1 = "ab";
    string s2 = "eidbaoo";
    cout << is_permutation(s1, s2);
    return 0;
}
