#include <bits/stdc++.h>
using namespace std;

bool check_atmost_k(vector<int>& temp, int k) {
    int count_zero = 0;
    for (int x : temp) {
        if (x == 0) count_zero++;
    }
    return count_zero <= k;
}

int solve(vector<int>& arr, int k) {
    int maxLen = 0;           
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        vector<int> sub;
        for (int j = i; j < n; j++) {
            sub.push_back(arr[j]);
            if (check_atmost_k(sub, k)) {
                maxLen = max(maxLen, (int)sub.size());
            }
        }
    }
    return maxLen;
}

int main() {
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    int res = solve(nums, 2);
    cout << res;
    return 0;
}
