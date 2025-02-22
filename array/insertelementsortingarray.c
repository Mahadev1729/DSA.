#include<stdio.h>
int main()
{
    int arr[10]={12,34,45,56,78,89,90,99};
    int i=7;
    int j;
    while(arr[i]>55)
    {
        arr[i+1]=arr[i];
        i--;
    }
    arr[i+1]=55;
    for(j=0;j<8;i++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}
