#include<stdio.h>
int main(){
	int a[5]={1,2,3,4,5},i,s=0,*p;
	p=&a[0];
	for(i=0;i<5;i++){
		s=s+*(p+i);
	}
	printf("%d",s);
	return 0;
}
