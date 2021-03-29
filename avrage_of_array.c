#include<stdio.h>
#include<malloc.h>
int sum(int *arr,int n){
	int i,s=0,av;
	for(i=0;i<n;i++){
		s=s+arr[i];
	}
	av=s/n;
	return av;
}
int main()
{
	int n,*arr,i,s=0;
	scanf("%d",&n);
	arr=malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int ans=sum(arr,n);
	printf("%d",ans);
	return 0;
}
