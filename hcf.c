#include<stdio.h>
int HCF(int a,int b)
{
	if(b==0)
		return a;
	else
		return HCF(b,a%b);
}
int main()
{
	int a,b,ans;
	scanf("%d%d",&a,&b);
	ans=HCF(a,b);
	printf("%d",ans);
	return 0;
}
