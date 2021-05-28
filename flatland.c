#include<stdio.h>
#include<math.h>
int main(){
	int t,i,n,x;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int c=0;
		scanf("%d",&n);
		while(n){
			x=sqrt(n);
			n=n-x*x;
			c++;
		}
		printf("%d\n",c);
	}
	return 0;
}
