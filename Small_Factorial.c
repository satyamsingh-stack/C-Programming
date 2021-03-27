#include<Stdio.h>
int fact(int n){
	if(n==1){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}
int main()
{
	int n,t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		int ans=fact(n);
		printf("%d\n",ans);
	}
	return 0;
}
