#include<stdio.h>
int main(){
	int t,d,x,y,z,i,ans1,ans2,ans3;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		ans1=0;
		ans2=0;
		scanf("%d%d%d%d",&d,&x,&y,&z);
		ans1=7*x;
		ans2=(y*d)+z*(7-d);
		ans3=ans1>ans2 ? ans1:ans2;
		printf("%d\n",ans3);
	}
	return 0;
}
