#include<stdio.h>
int main()
{
	int r,o,c,O,B,R;
	scanf("%d%d%d",&r,&o,&c);
	O=20-o;
	B=O*6;
	R=B*6;
	c=c+R;
	if(c>r){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}
