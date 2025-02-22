#include<stdio.h>
int main()
{
    int arr[8]={23,45,12,56,78,89,90,2};
    int rev[8];
    int i,j;
    for(i=0,j=8;i<8,j>0;i++,j--)
    {
        rev[i]=arr[j-1];
    }
    for(i=0;i<=8;i++)
    {
        printf("%d ",rev[i]);
    }
    return 0;
}
