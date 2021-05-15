#include<stdio.h>
int main(){
	int t,i,n,d;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&d,&n);
		while(d--){
			int sum=0;
			for(i=0;i<=n;i++){
				sum=sum+i;
			}
			n=sum;
		}
		printf("%d\n",n);
	}
}
