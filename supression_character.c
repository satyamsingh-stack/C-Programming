#include<stdio.h>
int main(){
	int d,m,y;
	scanf("%2d%*c%2d%*c%4d",&d,&m,&y);
	printf("%d-%d-%d",d,m,y);
	return 0;
}
