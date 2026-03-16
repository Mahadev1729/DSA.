#include<bits/stdc++.h>

using namespace std;


vector<int> rotateLeft(vector<int> arr, int k) {
    int n = arr.size();
    vector<int> temp(n);

    for(int i = 0; i < n; i++) {
        temp[i] = arr[(i + k) % n];
    }

    return temp;
}


int main(){

}
