#include<stdio.h>
int main(){
	char st[21];
	int i=0,s=0;
	gets(st);
	while(st[i]){
		if(st[i]>='0'  && st[i]<='9'){
			putchar(st[i]);
			s=s+st[i]-'0';
		}
		i++;
	}
	printf("\n%d",s);
}
