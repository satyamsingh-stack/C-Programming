#include<stdio.h>
int main(){
	int i,n,A,B,C,a,b,c,t;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d%d%d%d%d",&a,&b,&c,&t,&A,&B,&C);
		if(a>A || b>B || c>C){
			printf("NO\n");
		}
		else if(A+B+C<t){
			printf("NO\n");
		}
		else{
			printf("YES\n");
		}
	}
	return 0;
}
