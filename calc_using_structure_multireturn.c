#include<stdio.h>
struct result{
	int sum,sub,mul;
	float div;
};
struct result multiresult(int a,int b){
	struct result r;
	r.sum=a+b;
	r.sub=abs(a-b);
	r.mul=a*b;
	if(a>b){
		r.div=(float)a/b;
	}
	else{
		r.div=(float)b/a;
	}
	return r;
}
int main(){
	struct result r;
	int a,b;
	scanf("%d%d",&a,&b);
	r=multiresult(a,b);
	printf("%d\n%d\n%d\n%f",r.sum,r.mul,r.sub,r.div);
}
