#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int>& arr) {
    for (auto it : arr) {
        cout << it << " ";
    }
    cout << "\n";
}

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int l = low, r = mid + 1;

    while (l <= mid && r <= high) {
        if (arr[l] <= arr[r]) 
        {
            temp.push_back(arr[l++]);
        } 
        else 
        {
            temp.push_back(arr[r++]);
        }
    }
    while (l <= mid) temp.push_back(arr[l++]);
    while (r <= high) temp.push_back(arr[r++]);

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int>& nums, int low, int high) {
    if (low >= high) return;   
    int mid = (low + high) / 2;
    mergeSort(nums, low, mid);
    mergeSort(nums, mid + 1, high);
    merge(nums, low, mid, high);
}

int main() {
    vector<int> inputArray = {3, 2, 4, 1, 3};
    mergeSort(inputArray, 0, inputArray.size() - 1);
    printArray(inputArray);
    return 0;
}
