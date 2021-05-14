#include<stdio.h>
int main(){
	int a,b,t,i,h,x,y,c;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d%d%d%d",&h,&x,&y,&c);
		a=x+(y/2);
		b=a*h;
		if(b<=c){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
