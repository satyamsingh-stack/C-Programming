#include<stdio.h>
struct calc{
	int a,b;
};
int main()
{
	struct calc c1;
	int sum,sub,mul,div;
	printf("Enter First Number :");	scanf("%d",&c1.a);
	printf("Enter Second Number :"); scanf("%d",&c1.b);
	sum=c1.a+c1.b;
	sub=abs(c1.a-c1.b);
	mul=c1.a*c1.b;
	div=c1.a/c1.b;
	printf("Sum is:%d\n",sum);
	printf("Sub is:%d\n",sub);
	printf("Multiply is:%d\n",mul);
	printf("Division is:%d",div);
	return 0;
}
