#include<stdio.h>
int main(){
	int i,t,g1,s1,b1,g2,s2,b2,sum1,sum2;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		sum1=0;
		sum2=0;
		scanf("%d%d%d%d%d%d",&g1,&s1,&b1,&g2,&s2,&b2);
		sum1=g1+s1+b1;
		sum2=g2+s2+b2;
		if(sum1>sum2)
			printf("%d\n",1);
		else
			printf("%d\n",2);
	}
	return 0;
}
