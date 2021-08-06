#include<stdio.h>
int main(){
	int t,h,n,i,s1=0;
	scanf("%d%d",&t,&h);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		if(n>h){
			s1=s1+2;
		}
		else if(n<=h){
			s1++;
		}
	}
	printf("%d\n",s1);
	return 0;
}
