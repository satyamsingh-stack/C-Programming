#include<stdio.h>
#define CUBE
#if defined (SQUARE)
	main(){
		int num;
		scanf("%d",&num);
		printf("Square : %d",num*num);
	}
#elif defined(CUBE)
	main(){
		int num;
		scanf("%d",&num);
		printf("Cube %d",num*num*num);
	}
#else
	main(){
		int num;
		scanf("%d",&num);
		printf("%d",num);
	}
#endif
