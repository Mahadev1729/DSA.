#include<stdio.h>
#include<stdlib.h>
struct array
{
    int a[10];
    int size;
    int length; 
};
int linearSearch(struct array arr,int key)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        if(key==arr.a[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    struct array arr={{2,3,4,5,6},10,5};
    printf("%d\n",linearSearch(arr,4));
    return 0;
}
