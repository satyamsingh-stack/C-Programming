#include<stdio.h>
#include<string.h>
void main(){
	char st[21]="SATYAM SINGH";
	int i,s=0;
	for(i=0;st[i]!='\0';i++){
		s++;
	}
	printf("%d",s);
}


// #include<stdio.h>
// int main(){
// 	char st[21];
// 	int i;
// 	gets(st);
// 	while(st[i])
// 		i++;
// 	printf("%d",i);
// }
