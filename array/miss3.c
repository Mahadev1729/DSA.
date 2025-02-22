#include<stdio.h>
int main()
{
    int arr[20]={6,7,8,9,11,12,15,16,17,18,19};
    int i;
   int diff=arr[0]-0;
    for(i=0;i<11;i++)
    {     
        
        if(diff!=arr[i]-i)
        {
            while(diff<arr[i]-i)
            {
                printf("%d ",i+diff);
                diff++;
            }
        }
    }
    return 0;
}
// TS O(n) bcs while loop time is negilible...
