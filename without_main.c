#include<stdio.h>
#define decode(p,q,r,s,t) m##r##s##t
#define abes decode(c,h,a,i,n)
#define satyam printf
#define singh scanf
int abes()
{
	int a,b,c,ans;
	singh("%d%d%d",&a,&b,&c);
	ans=a>b && a>c ? a:b>c?b:c;
	satyam("Maximum Number is :%d",ans);
	return 0;
}
