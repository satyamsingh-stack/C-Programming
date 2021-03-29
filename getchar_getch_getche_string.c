#include<stdio.h>
#include<string.h>
void main()
{
	char x,y,z;
	printf("Enter First Character : ");
	x=getchar();
	printf("Enter Hidden Character : ");
	y=getch();
	putchar('*');
	printf("Enter Third Character : ");
	z=getche();
	printf("%c\n%c\n%c\n",x,y,z);
}
