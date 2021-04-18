#include<stdio.h>
#include<malloc.h>
int max_min(int *arr,int n,int *max,int *min){
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
	int n,*arr,i,max,min;
	scanf("%d",&n);
	arr=malloc(sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	max=min=arr[0];
	max_min(arr,n,&max,&min);
	printf("Maximum : %d\nMinimum : %d",max,min);
	return 0;
}
