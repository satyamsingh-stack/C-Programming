#include<stdio.h>
#include<string.h>
int main(){
	char st[1000],st1[1000];
	int beg=0,end,n;
	gets(st);
	gets(st1);
	n=strlen(st);
	end=n-1;
	while(beg<=end){
		st[beg]=(st[beg]^st[end])^(st[end]=st[beg]);
		beg++;
		end--;
	}
	if(strcmp(st1,st)==0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
