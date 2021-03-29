#include<stdio.h>
int fact(int n){
	if(n==1)
		return 1;
	return n*fact(n-1);
}
int main()
{
	int n,ans;
	scanf("%d",&n);
	ans=fact(n);
	printf("%d",ans);
	return 0;
}
