#include<stdio.h>
#include<string.h>
int main(){
	char st[21],st1[21];
	gets(st);
	gets(st1);
//	int l=strcmp(st,st1);
//	printf("%d",l);
	int i;
	for(i=0;st[i]==st1[i] && st[i]=='\0';i++);
	if(st[i]>st1[i]){
		printf("%d\n",1);
	}
	else if(st[i]<st1[i]){
		printf("%d\n",-1);
	}
	else{
		printf("%d\n",0);
	}
	return 0;
}
