#include<bits/stdc++.h>

using namespace std;



int countPartitions(vector<int>& nums) {
        int totalSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            totalSum += nums[i]; 
        }
        int leftSum = 0;
        int count = 0;
        for (int i = 0; i < nums.size() - 1; i++) { 
            leftSum += nums[i]; 
            int rightSum = totalSum - leftSum; 

            if ((leftSum % 2) == (rightSum % 2)) {
                count++; 
            }
        }
        return count; 
    }

int main(){
    vector<int>arr={10,10,3,7,6};
    int res=countPartitions(arr);
    
    cout<<res;
    return 0;

}    
