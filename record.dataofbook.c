#include<Stdio.h>
struct books{
	float price;
	int bookno;
	char author[21],title[21];
};
int main()
{
	struct books b;
	printf("Book Number is : ");	scanf("%d",&b.bookno);
	printf("Author is : ");	fflush(stdin); gets(b.author);
	printf("Title is : ");	fflush(stdin); gets(b.title);
	printf("Price is : ");	fflush(stdin); scanf("%f",&b.price);
	printf("Book Number is :%d\n",b.bookno);
	printf("Title is : %s\n",b.title);
	printf("Price is :%.2f\n",b.price);
	printf("Title of book is : %s\n",b.title);
	printf("Author is : %s",b.author);
	return 0;
}
