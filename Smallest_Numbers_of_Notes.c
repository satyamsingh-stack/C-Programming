#include<Stdio.h>
int main()
{
	int n,t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int s=0;
		scanf("%d",&n);
		s=s+n/100;	n=n%100;
		s=s+n/50;	n=n%50;
		s=s+n/10;	n=n%10;
		s=s+n/5;	n=n%5;
		s=s+n/2;	n=n%2;
		s=s+n/1;	
		printf("%d\n",s);
	}
	return 0;
}
