#include<stdio.h>
int main(){
	int n,a,b,t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int ts=0,tl=0,ans=0;
		scanf("%d%d%d",&n,&a,&b);
		ts=2*(180+n);
		tl=a+b;
		ans=ts-tl;
		printf("%d\n",ans);
	}
	return 0;
}
