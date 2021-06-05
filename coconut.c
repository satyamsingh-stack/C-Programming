#include<stdio.h>
int main(){
	int x1,x2,X1,X2,t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int s=0;
		scanf("%d%d%d%d",&x1,&x2,&X1,&X2);
		s=(X1/x1)+(X2/x2);
		printf("%d\n",s);
	}
	return 0;
}
