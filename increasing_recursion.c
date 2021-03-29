#include<stdio.h>
int inc(int n){
	if(n==1){
		printf("%d\n",1);
		return ;
	}
	inc(n-1);
	printf("%d\n",n);
}
int main()
{
	int n;
	scanf("%d",&n);
	inc(n);
	return 0;
}
