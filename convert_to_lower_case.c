#include<stdio.h>
int main(){
	char st[21],ch;
	int i;
	gets(st);
	while(st[i]){
		if(st[i]>='A' && st[i]<='Z'){
			st[i]=st[i]+32;
		}
		i++;
	}
	puts(st);
}
