#include<stdio.h>
int main(){
	char ch;
	ch=getchar();
	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
		switch(ch){
			case 'a' : case 'e':case'i':case'o':case'u':case'A':case'E':case'I':case'O':case'U':
				printf("%c is vowels",ch);	break;
			default	:
				printf("%c is constant",ch);
		}	
	}
	else{
		printf("Invalid input...");
	}
}
