#include<stdio.h>
int main(){
	int i,n,c,g,ans;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		ans=0;
		scanf("%d%d",&g,&c);
		ans=(c*c)/(2*g);
		printf("%d\n",ans);
	}
	return 0;
}
