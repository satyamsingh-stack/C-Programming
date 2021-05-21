#include<stdio.h>
int main(){
	int i,n,s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0)
			s++;
	}
	printf("%d\n",s);
	for(i=1;i<=n;i++){
		if(n%i==0)
			printf("%d ",i);
	}
	return 0;
}
