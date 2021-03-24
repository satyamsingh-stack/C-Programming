#include<stdio.h>
#define g(a,b,c)	a>b && a>c ? a : b>c ? b : c
int main()
{
	int a,b,c,ans;
	scanf("%d%d%d",&a,&b,&c);
	ans=g(a,b,c);
	printf("Largest Number is : %d",ans);
	return 0;
}
