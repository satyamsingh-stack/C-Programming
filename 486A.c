#include<stdio.h>
int main(){
	long long n;
	int ans;
	scanf("%d",&n);
	if(n&1){
		ans=-(n+1)/2;
	
		printf("%d\n",ans);
	}
	else{
		ans=n/2;
		printf("%d\n",ans);
	}
	return 0;
}
