#include<iostream>
#include<vector>
using namespace std;
#include <iostream>
#include <vector>
using namespace std;

void rotateBydPlace(vector<int> nums, int d) {
    int n = nums.size();
    d = d % n;
    vector<int> temp(n);
    int index = 0;

    
    for (int i = 0; i < n; i++) {
        temp[i] = nums[i];
    }

    
    int cnt = 0;
    for (int i = d; i < n; i++) {
        nums[cnt++] = temp[i];
    }

   
    for (int j = 0; j < d; j++) {
        nums[cnt++] = temp[j];
    }

    
    for (auto it : nums) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int d = 2;
    rotateBydPlace(nums, d);
    return 0;
}


