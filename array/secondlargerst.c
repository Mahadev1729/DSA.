#include<stdio.h>
int main()
{
    int i,slargest=-1;
    int arr[100]={34,45,23,3,6,7};
    int largest=arr[0];
    for(i=0;i<6;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }    }
    for(i=0;i<6;i++)
    {
        if(arr[i]>slargest && arr[i]!=largest)
        {
            slargest=arr[i];
        }
    }
    printf("%d ",slargest);
    return 0;

}
