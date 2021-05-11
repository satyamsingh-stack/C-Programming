#include<stdio.h>
#include<string.h>
int main(){
	char st[21];
	int l,i=0,mismatch=0,j;
	gets(st);
	while(st[i])
		i++;
	l=i;
	for(i=0,j=l-1;i<l/2;i++,j--){
		if(st[i]!=st[j])
		{
			mismatch=1;
			break;
		}
	}
	if(mismatch){
		printf("Not a Pallindrome");
	}
	else{
		printf("Pallindrome");
	}
}
