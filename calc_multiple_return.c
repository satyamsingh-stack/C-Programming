#include<stdio.h>
void calc(int a,int b,int *sum,int *sub,int *mul,int *div){
	*sum=a+b;
	*sub=abs(a-b);
	*mul=a*b;
	if(a>b){
		*div=a/b;
	}
	else{
		*div=b/a;
	}
}
int main(){
	int a,b,sum,sub,mul,div;
	scanf("%d%d",&a,&b);
	calc(a,b,&sum,&sub,&mul,&div);
	printf("Sum :%d\nSub :%d\nMul :%d\nDiv :%d\n",sum,sub,mul,div);
	return 0;
}
