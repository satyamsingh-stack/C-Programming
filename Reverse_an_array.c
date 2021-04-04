#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int beg=0,end=n-1;
    while(beg<end)
    {
        arr[beg]=(arr[beg]^arr[end])^(arr[end]=arr[beg]);
        beg++;
        end--;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
