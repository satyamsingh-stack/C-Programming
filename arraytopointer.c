#include<stdio.h>
int main(){
	int i,a[5]={1,2,3,4,5};
	int *p;
	for(i=0;i<5;i++){
		p=&a[i];
		printf("%d\n",*p);
	}
	return 0;
}
