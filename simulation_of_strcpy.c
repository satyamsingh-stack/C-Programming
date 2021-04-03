#include<stdio.h>
#include<string.h>
void main(){
	char st1[21],st2[21];
	int i;
	scanf("%[^\n]",&st1);
	for(i=0;st1[i]!='\0';i++){
		st2[i]=st1[i];
	}
	printf("%s",st2);
}
