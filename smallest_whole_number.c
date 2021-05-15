#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long int n,k;
		scanf("%ld%ld",&n,&k);
		if(k!=0){
			printf("%ld\n",n%k);
		}
		else
			printf("%ld\n",n);
	}
}
