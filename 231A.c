#include<stdio.h>
int main(){
	int i,n,s1,s2,s3,ans=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&s1,&s2,&s3);
		if((s1==1 && s2==1)|| (s2==1 && s3==1) || (s3==1 && s1==1))
			ans=ans+1;
	}
	printf("%d\n",ans);
	return 0;
}
