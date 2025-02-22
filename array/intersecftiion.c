#include<stdio.h>
int main()
{
    int arr1[5]={23,12,45,67,89};
    int arr2[5]={34,56,12,23,7};
    int arr3[5];
    int i,k,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(arr1[i]==arr2[j])
            {
               arr3[k]=arr2[j];
               k++;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",arr3[i]);
    }
    return 0;
}
