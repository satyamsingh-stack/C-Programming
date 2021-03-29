#include<stdio.h>
#include<malloc.h>
int second(int *arr,int n){
	int i,max,second;
	max=second=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>max){
			second=max;
			max=arr[i];
		}
		else if(arr[i]>second && arr[i]<max){
			second=arr[i];
		}
	}
	return second;
}
int main()
{
	int n,*arr,i,ans;
	scanf("%d",&n);
	arr=malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	ans=second(arr,n);
	printf("%d",ans);
	return 0;
}
