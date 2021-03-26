#include<stdio.h>
int main()
{
	int i,t,n,a,s=0;
	scanf("%d%d",&t,&n);
	for(i=0;i<t;i++){
		scanf("%d",&a);
		if(a%n==0){
			s=s+1;
		}
	}
	printf("%d",s);
	return 0;
}
