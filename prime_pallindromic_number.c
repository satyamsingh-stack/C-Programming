#include<stdio.h>
#include<math.h>
void pallindrome(int n){
	int r,s=0,k=n;
	while(n){
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(k==s){
		printf("%d ",k);
	}
}
int isprime(int n){
	int i,flag=1;
	for(i=2;i<=sqrt(n) && flag==1;i++){
		if(n%i==0){
			flag=0;
		}
	}
	if(flag==1){
		pallindrome(n);
	}
}
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		isprime(i);
	}
}
