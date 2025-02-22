#include<stdio.h>
int get(int arr[],int index);
int get(int arr[],int index)
{
    if(index>=0 && index<6)
    {
        return arr[index];
    }
    return -1;
}
int main()
{
    int arr[100]={2,3,4,57,1,89};
    printf("%d",get(arr,5));//get value from that index;
    return 0;
}
