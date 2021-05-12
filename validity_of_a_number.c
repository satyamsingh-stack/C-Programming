#include<stdio.h>
int main(){
	char st[11];
	int i=0,valid=1;
	gets(st);
	while(st[i]){
		if(!(st[i]>='0' && st[i]<='9')){
			valid=0;
			break;
		}
		i++;
	}
	if(valid && i==10){
		printf("It is a Valid mobile");
	}
	else{
		printf("Invalid Mobile");
	}
}
