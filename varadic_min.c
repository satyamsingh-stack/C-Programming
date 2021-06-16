#include<stdio.h>
#include<stdarg.h>
int min(int argc,...){
	int m,n,i;
	va_list ptr;
	va_start(ptr,argc);
	n=va_arg(ptr,int);
	for(i=1;i<argc;i++){
		m=va_arg(ptr,int);
		if(m<n){
			n=m;
		}
	}
	return n;
}
int main(){
	int m=min(5,1,2,3,4,5);
	printf("%d",m);
	return 0;
}
