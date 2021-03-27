#include<stdio.h>
int main()
{
	int t,a,b,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int d=0,p=1;
		scanf("%d%d",&a,&b);
		if(a>b)
		{
			d=a-b;
			p=b*2;
			printf("%d %d\n",a,(p+d));
		}
		else
		{
			d=b-a;
			p=a*2;
			printf("%d %d\n",b,(p+d));
		}
	}
	return 0;
}
