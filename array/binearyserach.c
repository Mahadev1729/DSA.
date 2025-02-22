//iteartive
#include<stdio.h>
int arr[100];
int binSearch(int n,int key);
int binSearch(int n,int key)
{
    int mid;
    int l=0;
    int h=n-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr[mid])
        {
            return mid;
        }
        else if(key<arr[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return -1;
}
int main()
{
    while(1)
    {
        int n,i,key;
        printf("\nEnter numbers of elements:");
        scanf("%d",&n);
        printf("Enter elements in array:");
        for(i=0;i<n;i++)
         {
           scanf("%d",&arr[i]);
         }
        printf("Enter your key element:");
        scanf("%d",&key);
        printf("%d",binSearch(n,key));
    }
    
    
    return 0;
}
