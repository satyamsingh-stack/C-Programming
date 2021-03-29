#include<stdio.h>
#include<string.h>
void main()
{
	char st1[21],st2[21];
	scanf("%[^\n]",st1);
	scanf(" %[^\n]",st2);
	strcat(st1,st2);
	printf("%s",st1);
}
