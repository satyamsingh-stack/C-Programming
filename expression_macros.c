#include<stdio.h>
int main(){
	#define calc(n)		printf("" #n "=%d",n)
	calc(2+3+1-0);
}
