#include<stdio.h>
int isvalid(char *st){
	int i,valid=0;
	while(st[i]){
		if(isdigit(st[i])){
			valid=1;
		}
		i++;
	}
	return valid;
}
void arm(int n){
	int r,s=0,k=n;
	while(n>0){
		r=n%10;
		s=s+(r*r*r);
		n=n/10;
	}
	if(s==k){
		printf("Armstrong");
	}
	else{
		printf("Not Armstrong");
	}
}
int main(){
	char st[21];
	gets(st);
	if(isvalid(st)){
		int a=atoi(st);
		arm(a);
	}
	else{
		printf("Invalid input...");
	}
	return 0;
}
