#include<bits/stdc++.h>

using namespace std;

bool increasingTriplet(vector<int>& nums) {
        int min1 = INT_MAX;
        int min2 = INT_MAX;
        for(int n : nums) {
            if(n <= min1) {
                min1 = n;  
            } else if(n <= min2) {
                min2 = n; 
            } else {
                return true;  
            }
        }
        return false;  
    }

int main(){
    vector<int>arr={1,2,3,4,5};
    bool res=increasingTriplet(arr);
    cout<<res;
    return 0;
}
