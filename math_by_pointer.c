#include<stdio.h>
int main(){
	int a,b,*x,*y;
	x=&a;
	y=&b;
	scanf("%d%d",&a,&b);
	int ans=*x**y;
	printf("%d",ans);
	return 0;
}

#include<stdio.h>
int main(){
	int a,b,*x,*y,ans;
	x=&a;
	y=&b;
	scanf("%d%d",&a,&b);
	ans=*x+*y;
	printf("%d",ans);
	return 0;
}

#include<stdio.h>
int main(){
	int a,b,*x,*y;
	x=&a;
	y=&b;
	scanf("%d%d",&a,&b);
	int ans=abs(*x-*y);
	printf("%d",ans);
	return 0;
}

#include<stdio.h>
int main(){
	int a,b,*x,*y;
	x=&a;
	y=&b;
	scanf("%d%d",&a,&b);
	int ans=*x/(*y);
	printf("%d",ans);
	return 0;
}
