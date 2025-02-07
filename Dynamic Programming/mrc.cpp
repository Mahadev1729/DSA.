#include<bits/stdc++.h>
using namespace std;

int fun(int n){
    fun(n-1);
    cout<<n<<endl;
    fun(n+1);
    cout<<n<<endl;
}

int main()
{
    int x;
    cin>>x;
    fun(x);
    return 0;
}
