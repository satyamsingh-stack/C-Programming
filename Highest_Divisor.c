#include<stdio.h>
int main()
{
	int n,i,max;
	scanf("%d",&n);
	for(i=10;i>=1;i--){
		if(n%i==0){
			printf("%d\n",i);
			break;
		}
	}
	return 0;
}
