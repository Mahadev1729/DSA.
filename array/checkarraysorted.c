#include<stdio.h>
#include<stdbool.h>
bool isSorted(int a[],int n);
bool isSorted(int a[],int n)
{
    int i;
    for(i=0;i<7;i++)
    {
        if(a[i]>a[i+1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[8]={12,23,34,45,56,67,78,89};
    isSorted(arr,8);
    return 0;
}
