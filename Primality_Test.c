#include<stdio.h>
#include<math.h>
int prime(int n){
	int flag=1,i;
	for(i=2;i<=sqrt(n) && flag==1;i++){
		if(n%i==0)
		{
			flag=0;
		}
	}
	if(flag==1)
		return 1;
	else
		return -1;
}
int main()
{
	int t,n,i,ans;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		ans=prime(n);
		if(ans==1)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
