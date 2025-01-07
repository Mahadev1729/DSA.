#include <iostream>
#include <vector>
using namespace std;

void comb(int index, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds) {
    // Base case: index reaches the end of the array
    if (index == arr.size()) {
        if (target == 0) {
            ans.push_back(ds);
        }
        return;
    }

    // Pick the element if it is less than or equal to the target
    if (arr[index] <= target) {
        ds.push_back(arr[index]);
        comb(index, target - arr[index], arr, ans, ds);
        ds.pop_back();
    }

    // Do not pick the element
    comb(index + 1, target, arr, ans, ds);
}

int main() {
    vector<int> arr = {2, 3, 6, 7};
    vector<vector<int>> ans;
    vector<int> ds;

    comb(0, 7, arr, ans, ds);

    // Output the results
    for (const auto &combination : ans) {
        for (int num : combination) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0; 
}
