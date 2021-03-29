#include<stdio.h>
#include<string.h>
void main()
{
	char username[31],password[31],ch;
	int i;
	printf("Enter Username : ");
	scanf("%[^\n]",username);
	printf("Enter Password : ");
	while(i<31){
		ch=getch();
		if(ch=='\r')	break;
		password[i]=ch;
		putchar('*');
		i++;
	}
	password[i]='\0';
	printf("Username : %s\n",username);
	printf("Password : %s\n",password);
}
