#include<stdio.h>
#include<malloc.h>
int max_min(int n,int *arr,int *max,int *min){
	*max=*min=arr[0];
	int i;
	for(i=0;i<n;i++){
		if(arr[i]>*max){
			*max=arr[i];
		}
		else if(arr[i]<*min){
			*min=arr[i];
		}
	}
}
int main(){
	int i,max,min,n,*arr;
	scanf("%d",&n);
	arr=malloc(sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	max_min(n,arr,&max,&min);
	printf("Max :%d\nMin :%d",max,min);
	return 0;
}
