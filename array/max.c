#include<stdio.h>
int findMax(int arr[],int n);
int findMax(int arr[],int n)
{
    int max,i;
    max=arr[0];
    for(i=1;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int a[100]={23,1,2,4,15,6,8,4};
    printf("%d",findMax(a,8));
    return 0;
}
