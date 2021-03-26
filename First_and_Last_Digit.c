#include<Stdio.h>
int first(int n){
	int r,s1=0;
	while(n>0){
		r=n%10;
		s1=s1*10+r;
		n=n/10;
	}
	int ans=s1%10;
	return ans;
}
int main()
{
	int t,n,i,l,f;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int s=0;
		scanf("%d",&n);
		l=n%10;
		f=first(n);
		s=l+f;
		printf("%d\n",s);
	}
	return 0;
}
