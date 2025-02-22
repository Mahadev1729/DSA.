#include<stdio.h>
#include<stdlib.h>
int arr[100];
int recursionbinarySearch(int l,int h,int key);
void forInput();
void inputKeyelement();
int recursionbinarySearch(int l,int h,int key)
{
    int mid;
    if(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr[mid])
        {
            return mid;
        }
        else if(key<arr[mid])
        {
            return recursionbinarySearch(l,mid-1,key);
        }
        else
        {
            return recursionbinarySearch(mid+1,h,key);
        }
    }
    return -1;
}
void forInput()
{
    int i,n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements in array=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void inputKeyelement()
{
    printf("Enter key element=");
    scanf("%d",&key);
}
int main()
{
    forInput();
    inputKeyelement();
    printf("%d",recursionbinarySearch(0,n-1,inputKeyelement()));
    return 0;
}
