#include<stdio.h>
int main()
{
    int arr[10]={3,6,8,8,10,12,15,15,15,20};
    int lastDuplicate=0;
    for(int i=0;i<10;i++)
    {
        if(arr[i]==arr[i+1] && arr[i]!=lastDuplicate)
        {
            printf("%d\n",arr[i]);
            lastDuplicate=arr[i];
            
        }
    }
    
}
