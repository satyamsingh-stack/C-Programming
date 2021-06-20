#include<stdio.h>
int main(){
	int t,x,m,d,i,a,b;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int min;
		scanf("%d%d%d",&x,&m,&d);
		a=x*m;
		b=x+d;
		min=a>b? b:a;
		printf("%d\n",min);
	}
	return 0;
}
