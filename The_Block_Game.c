#include<stdio.h>
int reverse(int n){
	int r,k=n,s=0;
	while(n>0){
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(s==k){
		return 1;
	}
	else{
		return -1;
	}
}
int main()
{
	int n,t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		int ans=reverse(n);
		if(ans==1)
			printf("wins\n");
		else
			printf("loses\n");
	}
	return 0;
}
