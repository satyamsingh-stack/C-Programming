#include<string.h>
#include<stdio.h>
int main()
{
	char st[21];
	gets(st);
	int i,j;
	for(i=0;i<strlen(st)-1;i++){
		for(j=i+1;j<strlen(st);j++){
			if(st[i]>st[j])
			{
				st[i]=(st[i]^st[j])^(st[j]=st[i]);	
			}
		}
	}
	puts(st);
	return 0;
}
