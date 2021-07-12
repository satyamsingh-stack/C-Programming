#include<stdio.h>
int main(){
	int n,a,b,x,i,ans1,ans2;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		ans1=0;
		ans2=0;
		scanf("%d%d%d",&a,&b,&x);
		ans1=b-a;
		ans2=ans1/x;
		printf("%d\n",ans2);
	}
	return 0;
}
