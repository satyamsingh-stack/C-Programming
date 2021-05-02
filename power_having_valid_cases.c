#include<stdio.h>
#include<string.h>
int isvalid(char *st){
	int i=0,valid=0;
	while(st[i]){
		if(isdigit(st[i])){
			valid=1;
			break;
		}
		i++;
	}
	valid=1;
}
int power(int n,int p){
	if(n==0){
		return 0;
	}
	else if(p==0){
		return 1;
	}
	return n*power(n,p-1);
}
int main(){
	char st1[21],st2[21];
	gets(st1);
	fflush(stdin);
	gets(st2);
	if(isvalid(st1) && isvalid(st2)){
		int n=atoi(st1);
		int p=atoi(st2);
		int ans=power(n,p);
		printf("%d",ans);
	}
	else{
		printf("user input wrong values");
	}
}
