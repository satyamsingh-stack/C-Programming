#include<stdio.h>
int main(){
	float n,dis,ans;
	scanf("%f",&n);
	dis=(n>=1000) ? 0.25*n : n>=500 ? 0.15*n:0.05*n;
	ans=n-dis;
	printf("%.2f",ans);
}
