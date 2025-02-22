#include<stdio.h>
int main()
{
    int arr[10]={1,1,2,2,2,3,3};
    int i=0,j;
    for(j=1;j<7;j++)
    {
        if(arr[i]!=arr[j])
        {
            arr[i+1]=arr[j];
            i++;
        }
    }
    printf("%d ",i+1);
}
