#include <bits/stdc++.h>
using namespace std;

void makeRow(int i, int col, vector<vector<int>>& arr) {
    for (int j = 0; j < col; j++) {
        if (arr[i][j] != 0) {
            arr[i][j] = -1;
        }
    }
}

void makeCol(int j, int row, vector<vector<int>>& arr) {
    for (int i = 0; i < row; i++) {
        if (arr[i][j] != 0) {
            arr[i][j] = -1;
        }
    }
}

vector<vector<int>> solve(vector<vector<int>>& nums) {
    int row = nums.size();
    int col = nums[0].size();

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (nums[i][j] == 0) {
                makeRow(i, col, nums);
                makeCol(j, row, nums);
            }
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (nums[i][j] == -1) nums[i][j] = 0;
        }
    }

    return nums;
}

int main() {
    vector<vector<int>> nums = {
        {1, 1, 1, 1},
        {1, 0, 0, 1},
        {1, 1, 0, 0},
        {1, 1, 1, 1}
    };

    vector<vector<int>> res = solve(nums);

    for (auto& row : res) {
        for (auto& col : row) {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}
