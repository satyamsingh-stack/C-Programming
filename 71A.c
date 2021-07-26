#include<stdio.h>
#include<string.h>
int main(){
	int n,i;
	char st[6000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		fflush(stdin);
		gets(st);
		int l1=strlen(st);
		if(l1<=10){
			printf("%s\n",st);
		}
		else{
			int l;
			l=strlen(st)-2;
			printf("%c%d%c\n",st[0],l,st[strlen(st)-1]);
		}
	}
	return 0;
}
