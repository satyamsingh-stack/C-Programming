#include<stdio.h>
#include<malloc.h>
int binary(int *arr,int n,int key){
	int mid,beg=0,end=n-1;
	while(beg<=end){
		mid=(beg+end)/2;
		if(key>arr[mid]){
			beg=mid+1;
		}
		else if(key<arr[mid]){
			end=mid-1;
		}
		else{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int n,*arr,i,key,ans;
	scanf("%d",&n);
	arr=malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&key);
	ans=binary(arr,n,key);
	if(ans==-1){
		printf("Element not Found");
	}
	else{
		printf("Element Found at Index : %d",ans);
	}
	return 0;
}
