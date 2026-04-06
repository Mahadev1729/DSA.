#include<bits/stdc++.h>

using namespace std;

int alternateDigitSum(int n) {
        int sum0 = 0, sum1 = 0, count = 0;
        while (n != 0) {
            if (count % 2 == 0) {
                sum0 += n % 10;
            } else {
                sum1 += n % 10;
            }
            n /= 10;
            count++;
        }
        return (count % 2 == 0) ? (sum1 - sum0) : (sum0 - sum1);
    }

int main(){
    int num=345;
    int res=alternateDigitSum(num);
    cout<<res;
    return 0;
}    
