#include<stdio.h>
int main(){
	int n,k,i,ans;
	scanf("%d%d",&n,&k);
	for(i=0;i<k;i++){
		ans=n%10;
		if(ans!=0){
			n=n-1;
		}
		else if(ans==0){
			n=n/10;
		}
	}
	printf("%d",n);
	return 0;
}
