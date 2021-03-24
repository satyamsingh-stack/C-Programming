#include<stdio.h>
#define product(a,b)	printf("Product of " #a " and " #b " is: %d\n",a*b)
int main()
{
	product(2,4);
	product(3,4);
	product(6,7);
	product(8,9);
	return 0;
}
