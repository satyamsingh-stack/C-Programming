#include<stdio.h>
int main(){
	int st[]={1,2,3,4,5,6,7,8,9,10};
	int i,n,s=0;
	n=sizeof(st)/sizeof(int);
	printf("%d\n",n);
	for(i=0;i<n;i++){
		s=s+st[i];
	}
	printf("%d",s);
}
