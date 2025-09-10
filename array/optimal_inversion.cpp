#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int>& arr) {
    for (auto it : arr) {
        cout << it << " ";
    }
    cout << "\n";
}

int merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int l = low, r = mid + 1;
    int count=0;
    while (l <= mid && r <= high) {
        if (arr[l] <= arr[r]) 
        {
            temp.push_back(arr[l]);
            l++;
        } 
        else 
        {
            temp.push_back(arr[r]);
            count+=(mid-l+1);
            r++;
        }
    }
    while (l <= mid) temp.push_back(arr[l++]);
    while (r <= high) temp.push_back(arr[r++]);

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
    return count;
}

int  mergeSort(vector<int>& nums, int low, int high) {
    int count=0;
    if (low >= high) return 0;   
    int mid = (low + high) / 2;
    count+=mergeSort(nums, low, mid);
    count+=mergeSort(nums, mid + 1, high);
    count+=merge(nums, low, mid, high);
    return count;
}
int number_inversion(vector<int>&a,int n){
    int res=mergeSort(a,0,n-1);
    return res;
}
int main() {
    vector<int> inputArray = {5,3,2,4,1};
    // mergeSort(inputArray, 0, inputArray.size() - 1);
    // printArray(inputArray);
    int result=number_inversion(inputArray,inputArray.size());
    cout<<result;
    return 0;
}
