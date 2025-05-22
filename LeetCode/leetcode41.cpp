#include<bits/stdc++.h>

using namespace std;

int firstMissingPositive(vector<int>& nums) {
                int missingNum=1;
                sort(nums.begin(),nums.end());
                for(auto num:nums){
                    if(num>0){
                        if(num==missingNum){
                            missingNum++;
                        }
                        else if(num>missingNum) break;
                    }
                }
                return missingNum;
            }

int main(){
    vector<int>arr={-1,-2,2,3,4,5};
    int sol=firstMissingPositive(arr);
    cout<<sol;
    return 0;
}            
    
