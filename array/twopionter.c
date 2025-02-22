#include<stdio.h>
void toSum(int a[],int target, int n);
void toSum(int a[],int target,int n)
{
    int sum,i;
    int start=0;
    int end=n-1;
    int result[2];
    while(start<end)
    {
        sum=a[start]+a[end];
        if(sum==target)
        {
           result[0]=start+1;
           result[1]=end+1;
           break;
        }
        else if(sum<target){
            start++;
        }
        else{
            end--;
        }
    }
  for(i=0;i<2;i++)
  {
    printf("%d ",result[i]);
  }

}

int main()
{
    int n,A[100],tg,j=0;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter elements in array=");
    while(j<n)
    {
        scanf("%d",&A[j]);
        j++;
    }
    printf("Enter your target");
    scanf("%d",&tg);
    toSum(A,tg,n);

    return 0;
}
