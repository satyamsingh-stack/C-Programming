#include<stdio.h>
#define cube(n) n*n*n
#define satyam scanf
#define singh printf
#define INT int
INT main()
{
	INT n,ans;
	satyam("%d",&n);
	ans=cube(n);
	singh("%d",ans);
	return 0;
}
