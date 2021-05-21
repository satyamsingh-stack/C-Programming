#include<stdio.h>
int main(){
	int l,r,i;
	scanf("%d%d",&l,&r);
	for(i=l;i<=r;i++){
		if(i&1)
			printf("%d ",i);
	}
	return 0;
}
