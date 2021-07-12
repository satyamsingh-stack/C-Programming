#include<stdio.h>
int main(){
	int n,t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		if(n==1)
			printf("%d\n",n);
		else
			printf("%d\n",n/2+1);
	}
	return 0;
}
