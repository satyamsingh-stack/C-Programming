#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%4==0){
		n++;
		printf("%d\n",n);
	}
	else{
		n--;
		printf("%d\n",n);
	}
	return 0;
}
