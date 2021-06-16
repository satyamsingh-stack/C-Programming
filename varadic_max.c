#include<stdio.h>
#include<stdarg.h>
int max(int argc,...){
	int i,m,n;
	va_list ptr;
	va_start(ptr,argc);
	n=va_arg(ptr,int);	//fetching the first no
	for(i=1;i<argc;i++){
		m=va_arg(ptr,int);
		if(m>n)	n=m;
	}
	return n;
}
int main(){
	int m=max(5,1,5,2,9,6);
	printf("%d",m);
	return 0;
}
