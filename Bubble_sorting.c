#include<Stdio.h>
#include<malloc.h>
int main()
{
	int n,*arr,i,j;
	scanf("%d",&n);
	arr=malloc(sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				arr[j]=(arr[j]^arr[j+1])^(arr[j+1]=arr[j]);
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
