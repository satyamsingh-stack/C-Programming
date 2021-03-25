#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch,filename[21];
	FILE *fp;
	int sum=0;
	fp=fopen("sample.txt","r");
	if(fp!=NULL){
		while((ch=fgetc(fp))!=-1){
			if(isdigit(ch))	sum=sum+ch-'0';
		}
		printf("%d",sum);
		fclose(fp);
	}
	else{
		printf("Unable to open File");
	}
	return 0;
}
