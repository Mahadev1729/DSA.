#include<bits/stdc++.h>

using namespace std;

int maxiMumPdt(vector<int>&nums){
    int maxPdt=INT_MIN;
    int currentPdt=1;
    for(int i=0;i<n;i++){
        currentPdt=currentPdt*nums[i];
        if(currentPdt<0){
            currentPdt=1;
        }
    }
}

int main(){

}
