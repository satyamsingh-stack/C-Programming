#include<stdio.h>
#include<string.h>
int main()
{
	char st[21];
	scanf("%[^\n]",&st);
//	gets(st);
	int l=strlen(st);
	printf("%d",l);
	return 0;
}
