#include<stdio.h>
void input(int *arr ,int n);
void display(int *arr,int n);
void input(int *arr,int n)
{
    
    printf("Enter elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void display(int arr[], int n)//*arr or arr[] both are same
{
    printf("Elements are:");
    for( int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int a[100],n;
    printf("Enter numbers of elements:");
    scanf("%d",&n);
    input(a,n);
    display(a,n);
    return 0;
}

