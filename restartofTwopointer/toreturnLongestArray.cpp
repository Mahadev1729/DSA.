#include <iostream>
#include <vector>
using namespace std;

vector<int> longestSubarray(vector<int> arr, int k) {
    int n = arr.size();
    int r = 0, l = 0;
    int sum = 0;
    int maxLen = 0, startIdx = 0, endIdx = 0;

    while (r < n) {
        sum += arr[r];

        while (sum > k) {  
            sum -= arr[l];
            l++;
        }

        if (r - l + 1 > maxLen) {
            maxLen = r - l + 1;
            startIdx = l;
            endIdx = r;
        }
        
        r++;
    }

   
    return vector<int>(arr.begin() + startIdx, arr.begin() + endIdx + 1);
}

int main() {
    vector<int> nums = {2, 5, 1, 7, 10};
    vector<int> result = longestSubarray(nums, 18);

    cout << "Longest Subarray: ";
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
