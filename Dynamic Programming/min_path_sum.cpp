#include <bits/stdc++.h>
using namespace std;

int f(int i, int j, vector<vector<int>>& a) {
    if (i == 0 && j == 0) return a[0][0];
    if (i < 0 || j < 0) return INT_MAX;

    int up = f(i - 1, j, a);
    int left = f(i, j - 1, a);

    
    int resUp = (up == INT_MAX ? INT_MAX : a[i][j] + up);
    int resLeft = (left == INT_MAX ? INT_MAX : a[i][j] + left);

    return min(resUp, resLeft);
}

int main() {
    vector<vector<int>> arr = {
        {5, 9, 7},
        {11, 5, 2}
    };

    int m = arr.size();
    int n = arr[0].size();

    int res = f(m - 1, n - 1, arr);
    cout << res;

    return 0;
}
