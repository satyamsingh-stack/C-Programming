#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n>=10 && n<=99){
		if(n&1){
			printf("ODD");
		}
		else{
			printf("Even");
		}
	}
	else{
		printf("Invalid...");
	}
	return 0;
}
