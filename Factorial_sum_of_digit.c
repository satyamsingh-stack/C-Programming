#include<stdio.h>
struct result{
	int sum;
	long fact;
};
struct result multiresult(int n){
	struct result r;
	int i,f=1,s,q;
	for(i=1;i<=n;i++)
		f=f*i;
	while(n>0){
		q=n%10;
		s=s+q;
		n=n/10;
	}
	
	r.fact=f;
	r.sum=s;
	return r;
}
int main(){
	struct result r;
	int n;
	scanf("%d",&n);
	r=multiresult(n);
	printf("Factorial : %ld\nSum : %d",r.fact,r.sum);
	return 0;
}
