#include<stdio.h>
int super(int n){
	int i,s=0;
	for(i=1;i<n;i++){
		if(n%i==0){
			s=s+i;
		}
	}
	if(s==n){
		return 1;
	}
	else{
		return -1;
	}
}
int main(){
	int i,ans;
	for(i=2;i<=1000;i++){
		ans=super(i);
		if(ans==1){
			printf("%d ",i);
		}
	}
	return 0;
}
