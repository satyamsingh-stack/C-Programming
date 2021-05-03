#include<stdio.h>
int main(){
	char ch;
	ch=getchar();
	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
		if(ch=='A' || ch=='E' || ch=='I' || ch=='O' ||ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
			printf("%c is a Vowel",ch);
		}
		else{
			printf("%c is Constant",ch);
		}
	}
	else{
		printf("Invalid...");
	}
	return 0;
}
