#include<stdio.h>
int main(){
	int t,n,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int s=0,r;
		scanf("%d",&n);
		r=(n-2)/2;
		while(r){
			s=s+r;
			r--;
		}
		printf("%d\n",s);
	}
}
