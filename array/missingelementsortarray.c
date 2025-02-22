#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,7,8,9,10,11};
    int sum=5*(10+2),i;
    int result;
    for(i=0;i<11;i++)
    {
         result+=arr[i];
    }
    printf("%d",result-sum);
    return 0;
}
