#include<stdio.h>
#include<string.h>
void main(){
	char st[101];
	int i;
	gets(st);
	for(i=0;i<strlen(st);i++){
		if(i==0){
			st[i]=toupper(st[i]);
		}
		else if(st[i]=='.'){
			st[i+2]=toupper(st[i+2]);
		}
	}
	puts(st);
}
