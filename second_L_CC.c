#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c && b>c){
		printf("%d\n",b);
	}
	else if(b>a && b>c && c>a){
		printf("%d\n",c);
	}
	else{
		printf("%d\n",c);
	}
	return 0;
}
