#include<stdio.h>
#include<string.h>
int main(){
	char st[21];
	scanf("%[^\n]",&st);
//	strrev(st);
	int beg=0,end=strlen(st)-1;
	while(beg<end){
		st[beg]=(st[beg]^st[end])^(st[end]=st[beg]);
		beg++;
		end--;
	}
	printf("%s",st);
	return 0;
}
