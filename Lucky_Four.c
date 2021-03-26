#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int n;
	while(t--)
	{
		scanf("%d",&n);
		int s=0;
		while(n>0)
		{
			int r=n%10;
			n=n/10;
			if(r==4)
			{
				s=s+1;
			}
		}
		printf("%d\n",s);
	}
	return 0;
}
