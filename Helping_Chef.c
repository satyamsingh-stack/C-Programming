#include<stdio.h>
int main()
{
	int n,t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		if(n<10){
			printf("Thanks for helping Chef!\n");
		}
		else{
			printf("%d\n",-1);
		}
	}
	return 0;
}
