#include<stdio.h>
#include<string.h>
int main()
{
	char st[31];
	gets(st);
	int i;
	for(i=0;i<strlen(st);i++){
		if(isupper(st[i]))
			st[i]=tolower(st[i]);
		else
			st[i]=toupper(st[i]);
	}
	puts(st);
	return 0;
}
