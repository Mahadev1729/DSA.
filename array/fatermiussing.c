#include<stdio.h>
int main()
{
    int arr[20]={3,7,4,9,12,6,1,11,2,10},i,j;
    int temp[20]={0};
    
    for(i=0;i<12;i++)
    {
        temp[arr[i]]++;
    }
    for(i=0;i<12;i++)
    {
        if(temp[i]==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
// time complexity is O(n)
