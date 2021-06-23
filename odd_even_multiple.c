#include<stdio.h>
int main(){
	int n,a;
	scanf("%d",&n);
	a=n/3;
	if(n%3!=0)
		printf("%d\n",-1);
	else if(a&1)
		printf("%d\n",1);
	else
		printf("%d\n",0);
	return 0;
}
