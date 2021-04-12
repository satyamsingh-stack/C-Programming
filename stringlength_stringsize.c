#include<stdio.h>
int main(){
	char st[21];
	int l,s,i;
	scanf("%[^\n]",&st);
	for(i=0;st[i]!='\0';i++){
		l++;
	}
	printf("String Length :%d\n",l);
	printf("String Size :%d",sizeof(st));
	return 0;
}
