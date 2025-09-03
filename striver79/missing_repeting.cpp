#include <bits/stdc++.h>
using namespace std;

vector<int> missing_repeating(vector<int> arr) {
    int n = arr.size();
    int repeating = -1, missing = -1;

    for (int i = 1; i <= n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == i) count++;  
        }
        if (count == 2) repeating = i;
        else if (count == 0) missing = i;
    }
    return {repeating, missing};
}

int main() {
    vector<int> nums = {4, 3, 6, 2, 1, 1};
    vector<int> res = missing_repeating(nums);
    for (auto it : res) {
        cout << it << " ";
    }
    return 0;
}
