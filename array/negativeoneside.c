#include<stdio.h>
int main()
{
    int arr[8]={-6,3,8,10,-7,-9,12,2};
    int i=0;
    int j=7;
    while(i<j)
    {
        while(arr[i]<0) i++;
        while(arr[j]>=0)j--;
        if(i<j)
        {
            swap(a[i],a[j]);
        }
    }
    for(i=0;i<8;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
