#include<stdio.h>
int main()
{
    int arr[20]={6,7,8,9,10,11,13,14,15,16,17};
    int sum,i,result;;
    sum=(2*arr[0]+11*1)*11/2;
    for(i=0;i<11;i++)
    {
        result+=arr[i];
    }
    printf("%d" ,result-sum);
    return 0;
}
