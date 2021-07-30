#include<stdio.h>
#include<string.h>
int main(){
	char st[31],st1[31];
	gets(st);
	int i,s1=0,s2=0;
	for(i=0;i<strlen(st);i++){
		if(islower(st[i]))
			s1++;
		else if(isupper(st[i]))
			s2++;
	}
	if(s1==s2)
		printf("%s\n",strlwr(st));
	else if(s2>s1)
		printf("%s\n",strupr(st));
	else if(s1>s2)
		printf("%s\n",strlwr(st));
	return 0;
}
