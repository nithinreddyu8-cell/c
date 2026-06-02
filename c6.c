#include<stdio.h>
int main()
{
    int arr[100],n,i,min,max;
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=max=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
        min=arr[i];
        if(arr[i]>max)
        max=arr[i];

    }
    printf("minimum=%d\n",min);
    printf("maximum=%d\n",max);
    return 0;
}