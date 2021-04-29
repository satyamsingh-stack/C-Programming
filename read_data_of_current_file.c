#include<stdio.h>
int main(){
	FILE *fp;
	char ch;
	fp=fopen(__FILE__,"r");
	if(fp!=1){
		while((ch=fgetc(fp))!=-1){
			putchar(ch);
		}
		fclose(fp);
	}
	else{
		printf("Unable to open File");
	}
	return 0;
}
