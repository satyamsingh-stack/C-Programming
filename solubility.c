#include<stdio.h>
int main(){
	int t,n,x,a,b,i,ans;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d%d%d",&x,&a,&b);
		n=a+(100-x)*b;
		ans=n*10;
		printf("%d\n",ans);
	}
}
