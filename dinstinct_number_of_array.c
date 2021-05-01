#include<stdio.h>
#include<malloc.h>
void distinct(int *arr,int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				break;
			}
		}
		if(j==n){
			printf("%d ",arr[i]);
		}
	}
}
int main(){
	int n,i,*arr;
	scanf("%d",&n);
	arr=malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	distinct(arr,n);
}
