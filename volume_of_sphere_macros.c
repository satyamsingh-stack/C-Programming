#include<stdio.h>
#define PI 3.14
#define s scanf
#define p printf
#define cube(n) n*n*n
int main(){
	double r,v;
	scanf("%lf",&r);
	v=(4.0/3)*PI*cube(r);
	printf("%lf",v);
	return 0;
}
