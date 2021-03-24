#include<stdio.h>
#define fact(n)   {int f=1,i;\
					for(i=1;i<=n;i++)\
						f=f*i;\
					printf("Factorial is : %d",f);\
				}
int main()
{
	int n;
	scanf("%d",&n);
	fact(n);
	return 0;
}
