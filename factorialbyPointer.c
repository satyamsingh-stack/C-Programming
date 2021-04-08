#include<stdio.h>
int main()
{
	int i,n,f=1;
	int *c;
	c=&f;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		*c=*c*i;
	}
	printf("%d",*c);
	return 0;
}
