#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[10]={1,0,2,3,4,0,9,0,0,1};
    vector<int>temp;
    int i,j=0;
    for(i=0;i<10;i++)
    {
        if(arr[i]!=0)
        {
            temp.push_back(arr[i]);
            j++;
        }
    }
    for(i=j;i<10;i++)
    {
        temp[i]=0;
    }
    for(i=0;i<10;i++)
    {
        cout<<temp[i] <<" ";
    }
}
