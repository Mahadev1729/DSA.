#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp; 

        for (string s : strs) {
            string key = s;
            sort(key.begin(), key.end()); 
            mp[key].push_back(s);
        }

        vector<vector<string>> result;
        for (auto& p : mp) {
            result.push_back(p.second);
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    vector<vector<string>> groups = sol.groupAnagrams(strs);

    cout << "Grouped Anagrams:\n";
    for (auto& group : groups) {
        cout << "[ ";
        for (auto& word : group) {
            cout << word << " ";
        }
        cout << "]";
    }

    return 0;
}
