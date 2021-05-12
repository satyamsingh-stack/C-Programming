#include<stdio.h>
int main(){
	char st[21],ch;
	int i,c=0;
	gets(st);
	ch=getchar();
	while(st[i]){
		if(ch==st[i]){
			c=c+1;
		}
		i++;
	}
	printf("%d",c);
}
