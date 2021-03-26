#include<stdio.h>
int main()
{
	int x;
	float y,ans;
	scanf("%d%f",&x,&y);
	if(x%5==0 && x<y){
		ans=y-x-0.50;
		printf("%.2f",ans);
	}
	else{
		printf("%.2f",y);
	}
	return 0;
}
