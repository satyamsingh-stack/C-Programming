#include<stdio.h>
int multi(int n,int *s,int *fact){
	int r,i;
	for(i=1;i<=n;i++){
		*fact=*fact*i;   /*Factorial must be calculated above sum to get correct answer*/
	}
	while(n){
		r=n%10;
		*s=*s+r;
		n=n/10;
	}
}
int main(){
	int n,s=0,fact=1;
	scanf("%d",&n);
	multi(n,&s,&fact);
	printf("Sum : %d\nFact : %d",s,fact);
	return 0;
}
