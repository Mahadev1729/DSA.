#include<stdio.h>
int main()
{
    int n,arr[20],i,key;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter elements in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter a key element:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            return i;
        }
    }
    return -1;
}
