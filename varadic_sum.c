#include<stdio.h>
#include<stdarg.h>
int sum(int argc,...){
	int s=0,n,i;
	va_list ptr;
	va_start (ptr,argc);
	for(i=0;i<argc;i++){
		n=va_arg(ptr,int);
		s=s+n;
	}
	return s;
}
int main(){
	int s=sum(10,1,2,3,4,5,6,7,8,9,10);
	printf("%d",s);
	return 0;
}
