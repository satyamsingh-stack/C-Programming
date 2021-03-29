#include<stdio.h>
#include<string.h>
int main()
{
	char st[31];
	int i,j;
	gets(st);
	for(i=0;i<strlen(st)-1;i++){
		for(j=i+1;j<strlen(st);j++)
		{
			if(st[i]>st[j]){
				st[i]=(st[i]^st[j]) ^ (st[j]=st[i]);
			}
		}
	}
	puts(st);
	return 0;
}
