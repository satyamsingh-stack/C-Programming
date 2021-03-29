#include<stdio.h>
#include<string.h>
int main()
{
	char st1[21],st2[21];
	scanf("%[^\n]",&st1);
	strcpy(st2,st1);
	strrev(st1);
	int l=strcmp(st1,st2);
	if(l==0){
		printf("Pallindrome");
	}
	else{
		printf("Not A Pallindrome");
	}
	return 0;
}
