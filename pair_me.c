#include<stdio.h>
int main(){
	int a,b,c,i,t;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d%d%d",&a,&b,&c);
		if(a+b==c || b+c==a || a+c==b)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
