#include<bits/stdc++.h>

using namespace std;

int convertDecimaltoBinary(string bS){
    // reverse(bS.begin(),bS.end());
    int n=bS.length();
    int dS=0;
    int i;
    for(i=n;i>0;i--){
       dS+=bS[i]*pow(2,i);
    }
    return dS;
}

int main()
{
    string inputString;
    cout<<"Enter the input string:";
    cin>>inputString;
    int ans=convertDecimaltoBinary(inputString);
    cout<<ans;
    return 0;
}
