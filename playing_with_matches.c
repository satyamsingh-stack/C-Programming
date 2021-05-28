#include<stdio.h>
int main(){
	int a,b,t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int s=0,r,ans=0;
		scanf("%d%d",&a,&b);
		s=a+b;
		while(s){
			r=s%10;
			if(r==0)
				ans=ans+6;
			else if(r==1)
				ans=ans+2;
			else if(r==2)
				ans=ans+5;
			else if(r==3)
				ans=ans+5;
			else if(r==4)
				ans=ans+4;
			else if(r==5)
				ans=ans+5;
			else if(r==6)
				ans=ans+6;
			else if(r==7)
				ans=ans+3;
			else if(r==8)
				ans=ans+7;
			else if(r==9)
				ans=ans+6;
			s=s/10;
		}
		printf("%d\n",ans);		
	}
	return 0;
}
