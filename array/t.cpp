#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,0,2,3,2,0,0,4,5,1};
    int i,j=-1;
    for(i=0;i<10;i++)
    {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
    }
    for(i=j+1;i<10;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int x:arr)
    {
        cout<<x<<" ";
    }
    return 0;
}
