#include<stdio.h>
int main(){
	int i,t,x,y,x1,y1,d;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int g=0;
		float ans1=0.0F,ans2=0.0F;
		scanf("%d%d%d%d%d",&x,&y,&x1,&y1,&d);
		ans1=x/x1;
		ans2=y/y1;
		g=ans1<ans2? ans1:ans2;
		if(g>=d)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
