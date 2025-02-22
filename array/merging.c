#include<stdio.h>
int main()
{
    int arr1[5]={2,3,10,15,25};
    int arr2[5]={3,4,7,18,20};
    int arr3[10];
    int i=0,j=0,k=0;
    while(i<5 && j<5)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k]=arr2[j];
           k++;
           j++;
        }
    }
    for(;i<5;i++)
    {
        arr3[k]=arr1[i];
        k++;
    }
    for(;j<5;j++)
    {
        arr3[k]=arr2[j];
        k++;
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",arr3[i]);
    }
    return 0;
}

