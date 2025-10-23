#include <bits/stdc++.h>
using namespace std;

void selectionsort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i <= n - 2; i++) {
        int mini = i;
        for (int j = i + 1; j < n; j++) { 
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }
        swap(arr[mini], arr[i]); 
    }
}

void printArr(vector<int>& resultArr) {
    for (auto it : resultArr)
        cout << it << " ";
    cout << endl;
}

int main() {
    vector<int> nums = {13, 46, 24, 52, 20, 9};
    selectionsort(nums);
    printArr(nums);
    return 0;
}
