#include<stdio.h>
#include<malloc.h>
int Linear(int *arr,int n,int key){
	int i;
	for(i=0;i<n;i++){
		if(arr[i]==key){
			return i;
		}
	}
	return -1;
}
int main()
{
	int n,*arr,key,i;
	scanf("%d",&n);
	arr=malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&key);
	int ans=Linear(arr,n,key);
	if(ans==-1)
		printf("Element Not Found");
	else
		printf("Element Found at index : %d",ans);
	return 0;
}
