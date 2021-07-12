#include<stdio.h>
int main(){
	int n,a,b,c,d,i,ans1,ans2;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		ans1=0;
		ans2=0;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		ans1=a+c;
		ans2=b+d;
		if(ans1!=180 && ans2!=180)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}
