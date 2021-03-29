#include<stdio.h>
#include<string.h>
int main()
{
	char st1[21];
	int i;
	gets(st1);
	for(i=0;i<strlen(st1);i++){
		if(isupper(st1[i]))
		{
			st1[i]=tolower(st1[i]);
		}
		else if(islower(st1[i])){
			st1[i]=toupper(st1[i]);
		}
	}
	puts(st1);
	return 0;
}
