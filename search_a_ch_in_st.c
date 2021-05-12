#include<stdio.h>
int main(){
	char st[21],ch;
	int i,found=0;
	gets(st);
	ch=getchar();
	while(st[i]){
		if(st[i]==ch){
			found=1;
			break;
		}
		i++;
	}
	if(found){
		printf("Character Found");
	}
	else{
		printf("Character Not Found");
	}
}
