#include<stdio.h>
#include<string.h>
int main(){
	int n,i,ans=0;
	char st[4];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",&st);
		if(st[0]=='-'||st[1]=='-'){
			ans--;
		}
		if(st[0]=='+'||st[1]=='+'||st[2]=='+'){
			ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}
