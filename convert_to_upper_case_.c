#include<stdio.h>
#include<stdio.h>
int main(){
	char st[21];
	int i;
	scanf("%[^\n]",&st);
	while(st[i]){
		if(st[i]>='a' && st[i]<='z'){
			st[i]=st[i]-32;
		}
		i++;
	}
	puts(st);
}
