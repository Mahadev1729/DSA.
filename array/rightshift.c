#include<stdio.h>
int main()
{
    int arr[10],n,i,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    temp=arr[n-1];
    for(i=1;i<n;i++)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
