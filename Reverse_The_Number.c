#include<stdio.h>
int reverse(int n){
	int r,s=0;
	while(n>0){
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	return s;
}
int main()
{
	int t,n,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		int ans=reverse(n);
		printf("%d\n",ans);
	}
	return 0;
}
