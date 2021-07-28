#include<stdio.h>
int main(){
	int n,w,k,i,ans=0,ans1;
	scanf("%d%d%d",&k,&n,&w);
	for(i=1;i<=w;i++){
		ans1=k*i;
		ans=ans+ans1;
	}	
	int final=ans-n;
	if(n>=ans)
		printf("%d\n",0);
	else
		printf("%d\n",final);
	return 0;
}
