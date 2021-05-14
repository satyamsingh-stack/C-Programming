#include<stdio.h>
int main(){
	int i,n,flag,t;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		if(n%10==0)
			flag=0;
		else if(n%5==0)
			flag=1;
		else
			flag=-1;
		printf("%d\n",flag);
	}
	return 0;
}
