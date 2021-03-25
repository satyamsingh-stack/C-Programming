#include<stdio.h>
int main()
{
	char ch,filename[21];
	FILE *fp;
	fp=fopen("sample.txt","w");
	if(fp!=NULL){
		for(;;){
			ch=getche();
			if(ch=='0')	break;
			fputc(ch,fp);
		}
		fclose(fp);
	}
	else{
		printf("Unable to File");
	}
	return 0;
}
