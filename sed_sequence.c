#include<stdio.h>
#include<malloc.h>
int main(){
	int t,i,n,k,j;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int *arr,s=0;
		scanf("%d%d",&n,&k);
		arr=malloc(n*sizeof(int));
		for(j=0;j<n;j++){
			scanf("%d",&arr[j]);
			s=s+arr[j];
		}
		if(s%k==0){
			printf("%d\n",0);
		}
		else{
			printf("%d\n",1);
		}
	}	
	return 0;
}
