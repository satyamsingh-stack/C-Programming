#include<stdio.h>
int main()
{
	char filename[21],ch;
	FILE *fp;
	printf("Enter Filename : "); gets(filename);
	fp=fopen(filename,"r");
	if(fp!=NULL){
		while((ch=fgetc(fp))!=-1){
			putchar(ch);
		}
		fclose(fp);
	}
	else{
		printf("File can not be open");
	}
}
