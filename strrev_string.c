#include<stdio.h>
#include<string.h>
void main()
{
	char st[21];
	scanf("%[^\n]",&st);	//gets(st);
	strrev(st);
	printf("%s",st);		//puts(st);
}
