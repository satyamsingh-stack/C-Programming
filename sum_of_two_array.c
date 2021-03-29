#include<stdio.h>
#include<malloc.h>
int sum(int *arr1,int *arr2,int n){
	int i;
	for(i=0;i<n;i++){
		int s=0;
		s=s+arr1[i]+arr2[i];
		printf("%d ",s);
	}
}
int main()
{
	int n,*arr1,*arr2,i;
	scanf("%d",&n);
	arr1=malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&arr1[i]);
	}
	arr2=malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&arr2[i]);
	}
	sum(arr1,arr2,n);
	return 0;
}
