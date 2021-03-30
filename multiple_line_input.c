#include<stdio.h>
#include<string.h>
int main()
{
	char st[41];
	printf("Enter the String:");
	scanf("%[^.]",st); 
//	here ^ is known as not.
	printf("String is:%s.",st);
	return 0;
}
