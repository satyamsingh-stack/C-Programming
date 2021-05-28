#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n>=1 && n<=50)
		printf("%d\n",100);
	else if(n>=51 && n<=100)
		printf("%d\n",50);
	else
		printf("%d\n",0);
	return 0;
}
