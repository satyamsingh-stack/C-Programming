#include<stdio.h>
int main(){
	int n,i,t,gess=0;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		if(n==1)
			gess=1;
	}
	if(gess)
		printf("HARD\n");
	else
		printf("EASY\n");
	return 0;
}
