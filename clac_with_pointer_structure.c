#include<stdio.h>
struct calc{
	int a,b;
};
int main(){
	struct calc c,*p;
	p=&c;
	printf("Enter Value of A and B : ");	scanf("%d%d",&p->a,&p->b);
	int sum=p->a+p->b;
	int sub=abs(p->a-p->b);
	int mul=p->a*p->b;
	int div;
	if(p->a>p->b){
		div=p->a/p->b;
	}
	else{
		div=p->b/p->a;
	}
	printf("Sum is : %d\nSub is : %d\nMul is : %d\nDivision is : %d\n",sum,sub,mul,div);
	return 0;
}
