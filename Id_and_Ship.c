#include<stdio.h>
int main()
{
	int t,i;
	char ch;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf(" %c",&ch);
		if(ch=='B'||ch=='b')
			printf("BattleShip\n");
		else if(ch=='C'||ch=='c')
			printf("Cruiser\n");
		else if(ch=='D'||ch=='d')
			printf("Destroyer\n");
		else if(ch=='F'||ch=='f')
			printf("Frigate\n");
	}
	return 0;
}
