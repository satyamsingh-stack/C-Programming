#include<stdio.h>
#include<malloc.h>
int main()
{
	int n,*arr,i;
	scanf("%d",&n);
	arr=malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max=arr[0],second=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>max){
			second=max;
			max=arr[i];
		}
		else if(arr[i]>max && arr[i]<second){
			second=arr[i];
		}
	}
	printf("%d",second);
	return 0;
}
