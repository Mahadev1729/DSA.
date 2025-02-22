#include<iostream>
#include<set>
using namespace std;
int main()
{
    int arr[6]={1,1,2,2,3,3};
    set<int>st;
    for(int i=0;i<6;i++)
    {
        st.insert(arr[i]);
    }
    int index=0;
    /*for(auto it:st)
    {
        arr[index]=it;
        index++;
    }*/
    for(auto x:st)
    {
        cout<<x<<" ";
    }
}
