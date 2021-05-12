#include<stdio.h>
int main(){
	char name[10][21];
	int i=0;
	for(i=0;i<10;i++){
		gets(name[i]);	
	}
	for(i=0;i<10;i++){
		putchar(name[i][0]);
	}
}
