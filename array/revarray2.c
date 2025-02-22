#include<stdio.h>
int main()
{
    int arr[10]={8,3,9,15,6,10,7,2,12,4};
    int i,j;
    int temp;
    for(i=0,j=9;i<j;i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
