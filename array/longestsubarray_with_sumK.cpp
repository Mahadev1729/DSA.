#include<iostream>
#include<vector>
using namespace std;

void lenoflangestSubarray(vector<int>nums, int x){
    int n=nums.size();
    int len=0;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
                int s=0;
           for(int k=i;k<=j;k++){
            s+=nums[k];
            if(s==x) {
                if(len<(j-i+1)){
                    len=j-i+1;
                }
                
                }
           }
            cout<<len<<endl;
        }
        
    }
   
    
}
int main(){
    vector<int>arr={1,2,3,1,1,1,1,4,2,3};
    lenoflangestSubarray(arr,3);
    return 0;
}
