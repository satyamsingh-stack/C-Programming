#include<stdio.h>
#include<ctype.h>
int main()
{
	char filename[21],ch;
	FILE *fp;
	printf("Enter Filename : ");	scanf("%[^\n]",filename);
	fp=fopen(filename,"r");
	if(fp!=NULL){
		int a=0,d1=0,sp=0;
		while((ch=fgetc(fp))!=EOF){
			if(isalpha(ch))	a=a+1;
			else if(isdigit(ch)) d1=d1+1;
			else sp=sp+1;
		}
		printf("Alphabet:%d,Digit:%d,Special Character:%d",a,d1,sp);
		fclose(fp);
	}
	else{
		printf("File can not be Open");
	}
}
