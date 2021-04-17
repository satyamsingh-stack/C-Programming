#include<stdio.h>
int decimal_to_binary(int n){
	if(n>1){
		decimal_to_binary(n/2);
	}
	printf("%d ",n%2);
}
int main()
{
	int n;
	scanf("%d",&n);
	decimal_to_binary(n);
}
