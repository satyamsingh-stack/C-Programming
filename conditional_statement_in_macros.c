#include<stdio.h>
#define CUBE
int main(){
	int num;
	printf("Enter A Number : ");
	scanf("%d",&num);
	#if defined (SQUARE)
	printf("Square : %d",num*num);
	#elif defined (CUBE)
	printf("Cube : %d",num*num*num);
	#else
	printf("Hello else");
	#endif
}
