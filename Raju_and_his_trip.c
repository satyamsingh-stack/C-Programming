#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n%5==0 || n%6==0)
		printf("YES");
	else
		printf("NO");
	return 0;
}
