#include<stdio.h>
#include<stdio.h>
int main(){
	char st[21],ch;
	int i;
	scanf("%[^\n]",&st);
	while(st[i]){
		if(st[i]>='a' && st[i]<='z'){
			ch=st[i]-32;
			putchar(ch);
		}
		i++;
	}
	
}
