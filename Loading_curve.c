#include<stdio.h>
#include<time.h>
int main(){
	int r;
	printf("Loading...");
	for(r=5;r<=20;r++){
		sleep(1);
		printf("%c",177);
	}
	return 0;
}
