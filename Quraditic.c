#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float d,x,y;
	printf("Enter the Coefficient of x^2:");
	scanf("%d",&a);
	printf("Enter the Coefficient of x:");
	scanf("%d",&b);
	printf("Enter the constant:");
	scanf("%d",&c);
	d=sqrt((b*b)-(4.0*a*c));
	if(d>0)
	{
		x=(-b+d)/(2*a);
		y=(-b-d)/(2*a);
		printf("Roots are Real and Distanct:%.2f and %.2f",x,y);
	}
	else if(d=0)
	{
		x=(-b)/(2*a);
		y=(-b)/(2*a);
		printf("Roots are Real and Equal:%.2f and %.2f",x,y);
	}
	else
	{
		printf("Roots are imaginary");
	}
	return 0;
}
