#include<stdio.h>
#include<string.h>
int count(char *st,int *s1,int *s2,int *s3){
	int i;
	for(i=0;i<strlen(st);i++){
		if(isalpha(st[i])){
			*s1=*s1+1;
		}
		else if(isdigit(st[i])){
			*s2=*s2+1;
		}
		else{
			*s3=*s3+1;
		}
	}
}
int main(){
	char st[21];
	int s1=0,s2=0,s3=0;
	gets(st);
	count(st,&s1,&s2,&s3);
	printf("%d\n%d\n%d",s1,s2,s3);
	return 0;
}
