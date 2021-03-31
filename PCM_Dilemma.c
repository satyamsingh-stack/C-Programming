#include<stdio.h>
#include<string.h>
int main()
{
	char st[100];
	int i,t,j;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%s",&st);
		int P=0,C=0,M=0;
		for(j=0;j<3;j++)
		{
			if(st[j]=='P'){
				P++;
			}
			else if(st[j]=='C'){
				C++;
			}
			else if(st[j]=='M'){
				M++;
			}
		}
		if(P==1 && C==1 && M==1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
