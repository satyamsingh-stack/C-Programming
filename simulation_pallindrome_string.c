#include<stdio.h>
#include<string.h>
int main(){
	char st[21];
	int i,j,l,valid=0;
	gets(st);
	while(st[i])
		i++;
	l=i;
	for(i=0,j=l-1;i<l/2;i++,j--){
		if(st[i]!=st[j]){
			valid=1;
			break;
		}
	}
	if(valid)
		printf("Not A Pallindrome");
	else
		printf("Pallindrome");
}
