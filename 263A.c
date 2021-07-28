#include<stdio.h>
#include<string.h>
int main(){
	char st[21];
	gets(st);
	int i,j,n,ans;
	n=strlen(st);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++)
		if(st[i]>st[j]){
			st[i]=(st[i]^st[j])^(st[j]=st[i]);
		}
	}
	for(i=1;i<n;i++){
		if(st[i]!=st[i-1]){
			ans++;
		}
	}
	if(ans&1)
		printf("CHAT WITH HER\n");
	else
		printf("IGNORE HIM\n");
	return 0;
}
