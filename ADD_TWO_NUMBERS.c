#include<stdio.h>
int main()
{
	int t,a,b,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int s=0;
		scanf("%d%d",&a,&b);
		s=a+b;
		printf("%d\n",s);
	}
	return 0;
}
