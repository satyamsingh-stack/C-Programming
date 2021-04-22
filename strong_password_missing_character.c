#include<stdio.h>
#include<string.h>
int main(){
	int n,i,flag1=0,flag2=0,flag3=0,flag4=0;
	char st[21];
	scanf("%d",&n);
	fflush(stdin);
	gets(st);
	for(i=0;i<n;i++){
		if(islower(st[i])){
			flag1=1;
		}
		else if(isupper(st[i])){
			flag2=1;
		}
		else if(st[i]=='!' || st[i]=='@'||st[i]=='#'||st[i]=='$'||st[i]=='%'||st[i]=='^'||st[i]=='&'||st[i]=='*'||st[i]=='-'||st[i]=='+'){
			flag3=1;
		}
		else if(isdigit(st[i])){
			flag4=1;
		}
	}
	int total=4-(flag1+flag2+flag3+flag4);
	if(n+total<6){
		printf("%d",(6-n));
	}
	else{
		printf("%d",total);
	}
	return 0;
}
