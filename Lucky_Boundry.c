#include<stdio.h>
int mod(int n){
	int m,s=0;
	for(m=1;m<=n;m++){
		if(n%m<=n/2){
			s++;
		}
	}
	return s;
}
int main(){
	int t,n,i;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%d\n",mod(n));
	}
	return 0;
}
