#include<stdio.h>
int main()
{
	int t,n,i,even=0,odd=0;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		if(n%2==0){
			even++;
		}
		if(n%2!=0){
			odd++;
		}
	}
	if(even>odd){
		printf("READY FOR BATTLE");
	}
	else{
		printf("NOT READY");
	}
	return 0;
}
