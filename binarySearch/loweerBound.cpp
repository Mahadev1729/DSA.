#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {3, 5, 8, 15, 19};
    int x = 12;
    
    // Using lower_bound to find the smallest index where arr[mid] >= x
    auto it = lower_bound(arr.begin(), arr.end(), x);
    
    if (it != arr.end()) 
        cout << "Lower bound: " << *it << endl;
    else 
        cout << "No lower bound found" << endl;

    return 0;
}
