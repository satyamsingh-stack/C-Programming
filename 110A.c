#include<stdio.h>
#include<string.h>
int main(){
	char st[1000];
	int n,i,count=0;
	gets(st);
	n=strlen(st);
	for(i=0;i<n;i++){
		if(st[i]=='4'||st[i]=='7'){
			count++;
		}
	}
	if(count==4||count==7){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}
