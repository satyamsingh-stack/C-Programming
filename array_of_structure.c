#include<stdio.h>
#define N 3
struct Book{
	int no;
	char author[21],title[31];
	float price;
};
int main(){
	struct Book b[N];
	int i;
	for(i=0;i<3;i++){
		printf("Enter Book no : "); 	scanf("%d",&b[i].no);
		printf("Enter Author Name: ");	fflush(stdin);	gets(b[i].author);
		printf("Enter Title :");		fflush(stdin);	gets(b[i].title);
		printf("Enter Price : ");	scanf("%f",&b[i].price);
	}
	for(i=0;i<N;i++){
		printf("%d %s %s %f\n",b[i].no,b[i].author,b[i].title,b[i].price);
	}
	return 0;
}
