#include<stdio.h>
#include<stdlib.h>
struct array
{ 
    int A[20];
    int size;
    int length;
    
};
void display(struct array arr)
{
    int i;
    printf("Elements are\n");
    for(i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }

}
int main()
{
    struct array arr;
    //struct arry arr={array={2,4,5,6},size=20,number of elemnts=5};
    int n,i;
    printf("Enter size of array=");
    scanf("%d",&arr.size);
   // arr.A=(int *)malloc(arr.size*sizeof(int));//create in heap memory
    arr.length=0;
    printf("Enter numbers of array:");
    scanf("%d",&n);
    printf("Enter elements=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr.A[i]);
    }
    arr.length=n;
    display(arr);

    return 0;
}
