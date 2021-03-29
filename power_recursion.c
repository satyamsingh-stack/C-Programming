#include<stdio.h>
int power(int n,int p){
	if(n==0)
		return 0;
	else if(p==0)
		return 1;
	else
		return n*power(n,p-1);
}
int main()
{
	int n,p,ans;
	scanf("%d%d",&n,&p);
	ans=power(n,p);
	printf("%d",ans);
	return 0;
}
