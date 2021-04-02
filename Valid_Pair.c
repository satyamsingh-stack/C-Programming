#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a==b || a==c){
		printf("YES");
	}
	else if(b==a || b==c){
		printf("YES");
	}
	else if(c==a || c==b){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}
