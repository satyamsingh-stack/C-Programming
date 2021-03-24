#include<stdio.h>
#define mypow(b,a) pow(a,b)
#define satyam int
#define singh scanf
#define p printf
#include<math.h>
int main()
{
	satyam a,b;
	singh("%d%d",&a,&b);
	satyam ans=mypow(a,b);
	p("%d",ans);
	return 0;
}
