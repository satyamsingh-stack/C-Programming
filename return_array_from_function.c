#include<stdio.h>
#include<malloc.h>
int *sort(int *arr,int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j])
				arr[i]=(arr[i]^arr[j])^(arr[j]=arr[i]);
		}
	}
	return arr;
}
int main(){
	int n,*arr,i,*arr1;
	scanf("%d",&n);
	arr=malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	arr1=sort(arr,n);
	for(i=0;i<n;i++){
		printf("%d ",arr1[i]);
	}
  return 0;
}
