#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n%5==0 || n%6==0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
