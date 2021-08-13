#include<stdio.h>
int main(){
	int a,b,t,i,k,c;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&a,&b);
		if(a%b!=0){
			c=b-(a%b);
			printf("%d\n",c);
		}
		else{
			printf("%d\n",c);	
		}
	}
	return 0;
}
