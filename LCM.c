#include<stdio.h>
int main(){
	int a,b,ans,max;
	scanf("%d%d",&a,&b);
	max=a>b? a:b;
	while(1){
		if(max%a==0 && max%b==0){
			ans=max;
			break;
		}
		max++;
	}
	printf("LCM of %d and %d is : %d",a,b,max);
	return 0;
}
