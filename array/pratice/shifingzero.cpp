#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int arr[]={1,2,3,0,9,0,0,8};
    int i;
    vector<int>temp={0};
    vector<int>temp1={0};
    vector<int>temp2={0};
    for(i=0;i<8;i++)
    {
        if(arr[i]==0)
        {
            temp.push_back(arr[i]);
        }
        else
        {
            temp1.push_back(arr[i]);
        }
    }
    for(i=0;i<5;i++)
    {
        temp1.push_back(temp[i]);
    }
    for(i=0;i<3;i++)
    {
        temp2.push_back(temp1[i]);
    }
    for(int j=0;j<8;j++)
    {
        cout<<temp2[i]<<" ";
    }
    return 0;
}
