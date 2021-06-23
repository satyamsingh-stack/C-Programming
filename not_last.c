#include<stdio.h>
int main(){
	int n,a1,a2;
	scanf("%d",&n);
	a1=n/10;
	a2=a1%10;
	if(a2==7)
		printf("%d\n",1);
	else
		printf("%d\n",0);
	return 0;
}
