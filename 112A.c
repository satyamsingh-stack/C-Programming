#include<stdio.h>
#include<string.h>
int main(){
	char st1[10000],st2[10000];
	scanf("%s%s",&st1,&st2);
	int ans=strcmpi(st1,st2);
	printf("%d",ans);
	return 0;
}
