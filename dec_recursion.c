#include<Stdio.h>
int dec(int n){
	if(n==1){
		printf("%d\n",1);
		return ;
	}
	printf("%d\n",n);
	dec(n-1);
}
int main()
{
	int n;
	scanf("%d",&n);
	dec(n);
	return 0;
}
