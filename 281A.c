#include<stdio.h>
#include<string.h>
int main(){
	char st[1000];
	gets(st);
	st[0]=toupper(st[0]);
	puts(st);
	return 0;
}
