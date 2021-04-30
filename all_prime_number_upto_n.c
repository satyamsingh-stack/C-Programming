#include<stdio.h>
#include<math.h>
int prime(int n){
	int i,flag=1;
	for(i=2;i<=sqrt(n) && flag==1;i++){
		if(n%i==0){
			flag=0;
		}
	}
	return flag;
}
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(prime(i)){
			printf("%d ",i);
		}
	}
	return 0;
}
