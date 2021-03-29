#include<stdio.h>
#include<string.h>
void main()
{
	char st1[21],st2[21];
	scanf("%[^\n]",&st1);
	strcpy(st2,st1);
	printf("%s",st2);
}
