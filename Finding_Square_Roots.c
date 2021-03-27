#include<stdio.h>
#include<math.h>
int main()
{
	int n,t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		int ans=sqrt(n);
		printf("%d\n",ans);
	}
	return 0;
}
