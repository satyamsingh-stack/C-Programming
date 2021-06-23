#include<stdio.h>
#include<malloc.h>
int find_me(int *arr,int n,int k){
	int i;
	for(i=0;i<n;i++){
		if(arr[i]==k){
			return 1;
		}
	}
	return -1;
}
int main(){
	int n,*arr,i,k,ans;
	scanf("%d%d",&n,&k);
	arr=malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	ans=find_me(arr,n,k);
	if(ans==1){
		printf("%d\n",1);
	}
	else{
		printf("%d\n",-1);
	}
}
