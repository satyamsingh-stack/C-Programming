#include<stdio.h>
#include<string.h>
int main(){
	char st[21];
	gets(st);
	int i;
	while(st[i]){
		if(st[i]=='A' || st[i]=='E'  || st[i]=='I'  || st[i]=='O'  || st[i]=='U'  || st[i]=='a'  || st[i]=='e'  || st[i]=='i'  || st[i]=='o' || st[i]=='u'){
			putchar(st[i]);
		}
		i++;
	}
}
