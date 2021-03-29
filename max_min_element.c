#include<stdio.h>
#include<malloc.h>
int max_min(int *arr,int n){
	int i,max,min;
	max=min=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("Maximum Element is : %d\n",max);
	printf("Minimum Element is : %d",min);
}
int main()
{
	int n,min,*arr,max,i;
	scanf("%d",&n);
	arr=malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	max_min(arr,n);
	return 0;
}
