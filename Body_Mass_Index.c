#include<stdio.h>
#include<math.h>
int main()
{
	int t,i,m,h,ans;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d%d",&m,&h);
		ans=m/pow(h,2);
		if(ans<=18){
			printf("1\n");
		}
		else if(ans>=19 && ans<=24){
			printf("2\n");
		}
		else if(ans>=25 && ans<=29){
			printf("3\n");
		}
		else{
			printf("4\n");
		}
	}
	return 0;
}
