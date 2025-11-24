#include<bits/stdc++.h>
using namespace std;
bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;

        for (int b : bills) {
            if (b == 5) {
                five++;
            } 
            else if (b == 10) {
                if (five == 0) return false;
                five--;
                ten++;
            } 
            else {
                if (ten > 0 && five > 0) {
                    ten--;
                    five--;
                } 
                else if (five >= 3) {
                    five -= 3;
                } 
                else {
                    return false;
                }
            }
        }
        return true;
    }


int main(){
    vector<int>arr={5,5,5,10,20};
    bool res=lemonadeChange(arr);
    cout<<res;
    return 0;
}    

