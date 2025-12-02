#include <bits/stdc++.h>
using namespace std;

void permute(vector<int>& arr, int start, int end) {
    if (start == end) {
        for (int x : arr) cout << x << " ";
        cout << "\n";
        return;
    }

    for (int i = start; i <= end; i++) {
        swap(arr[start], arr[i]);
        permute(arr, start + 1, end);
        swap(arr[start], arr[i]);
    }
}

int main() {
    vector<int> arr = {1, 2, 3};
    int n = arr.size();

    permute(arr, 0, n - 1);

    return 0;
}
