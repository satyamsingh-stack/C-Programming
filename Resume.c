#include<stdio.h>
#include<string.h>
void line(){
	int n;
	for(n=1;n<=80;n++){
		printf("_");
	}
	printf("\n");
}
struct resume{
	char c1[51],c2[51],c3[51],s1[51],s2[51],s3[51],m1[21],m2[21],m3[21];
	char name[51],email[51],phone[21],address[51],linked[51],github[51];
	char language[91],it[91],development[91],familier[91];
	char tw1[31],tw2[21],tw3[31],tw4[31],tw5[31];
	char aa1[31],aa2[31],aa3[31],aa4[31],aa5[31];
	char pp[31];
};
struct resume r;
void main(){
	system("cls");
	printf("<<Please provide Personal Information>>\n");
	printf("Enter Your Name : ");	fflush(stdin);	gets(r.name);
	printf("Your City Name : ");	fflush(stdin);	gets(r.address);
	printf("Enter Your Mobile No. : ");	fflush(stdin);	gets(r.phone);
	printf("Enter Your Email I'd : ");	fflush(stdin);	gets(r.email);
	printf("Enter Your LinkedIn I'd : ");	fflush(stdin);	gets(r.linked);
	printf("Enter Your Github I'd : ");	fflush(stdin);	gets(r.github);
	system("cls");
	printf("<<Now Porvide Acedemic Details>>\n");
	printf("Enter Undergraduate Degree Name : ");	fflush(stdin);	gets(r.c1);
	printf("Enter Higher Level of School Degree : ");	fflush(stdin);	gets(r.c2);
	printf("Type 10 : ");	fflush(stdin);	gets(r.c3);
	printf("Enter Undergraduation College Name : ");	fflush(stdin);	gets(r.s1);
	printf("Enter Class 12 School Name : ");	fflush(stdin);	gets(r.s2);
	printf("Enter Class 10 School Name : ");	fflush(stdin);	gets(r.s3);
	printf("Enter percentege/CGPA of Undergradiation : ");	fflush(stdin);	gets(r.m1);
	printf("Enter percentage/CGPA of Class 12 : ");	fflush(stdin);	gets(r.m2);
	printf("Enter percentage/CGPA of Class 10 : ");	fflush(stdin);	gets(r.m3);
	system("cls");
	printf("<<Now Enter Technical Skills>>\n");
	printf("Enter All Languages you know : ");	fflush(stdin);	gets(r.language);
	printf("Enter IT Contructs Skills : ");	fflush(stdin);	gets(r.it);
	printf("Enter Development Tools on which You have Worked : ");	fflush(stdin);	gets(r.development);
	printf("Enter Language or any IT Skills with which you are familier : ");	fflush(stdin);	gets(r.familier);
	system("cls");
	printf("<<Enter Details about Project>>\n");
	int z;
	printf("How many Projects you have completed : ");	scanf("%d",&z);
	printf("Brief About your 1 Project : ");	fflush(stdin);	gets(r.pp);
	system("cls");
	printf("<<Now Enter Details of Traning and Workshop>>\n");
	int n;
	printf("How many Traning or Workshop you have attend : ");scanf("%d",&n);
	printf("Breif about your 1 Traning or Workshop : ");	fflush(stdin);	gets(r.tw1);
	printf("Breif about your 2 Traning or Workshop : ");	fflush(stdin);	gets(r.tw2);
	printf("Breif about your 3 Traning or Workshop : ");	fflush(stdin);	gets(r.tw3);
	printf("Breif about your 4 Traning or Workshop : ");	fflush(stdin);	gets(r.tw4);
	printf("Breif about your 5 Traning or Workshop : ");	fflush(stdin);	gets(r.tw5);
	system("cls");
	printf("<<Awards and Achivements>>\n");
	int m;
	printf("How many Awards or Achivements do you have : ");scanf("%d",&m);
	printf("Brief about 1 Award or Achivement : ");	fflush(stdin);	gets(r.aa1);
	printf("Brief about 2 Award or Achivement : ");	fflush(stdin);	gets(r.aa2);
	printf("Brief about 3 Award or Achivement : ");	fflush(stdin);	gets(r.aa3);
	printf("Brief about 4 Award or Achivement : ");	fflush(stdin);	gets(r.aa4);
	printf("Brief about 5 Award or Achivement : ");	fflush(stdin);	gets(r.aa5);
	system("cls");
	printf("%s\n",r.name);
	printf("Address -: ");
	printf("%s\n",r.address);
	printf("Phone :- ");
	printf("%s\n",r.phone);
	printf("Email -: ");
	printf("%s\n",r.email);
	printf("LinkedlIn :- ");
	printf("%s\n",r.linked);
	printf("GitHub -: ");
	printf("%s\n",r.github);
	printf("\n");
	printf("\n");
	printf("ACEDEMIC Details--\n");
	line();
	printf("%-40s %-30s %-10s\n","Cource","School/Collage","%/CGPA");
	line();
	printf("%-40s %-30s %-10s\n",r.c1,r.s1,r.m1);
	printf("%-40s %-30s %-10s\n",r.c2,r.s2,r.m2);
	printf("%-40s %-30s %-10s\n",r.c3,r.s2,r.m3);
	line();
	printf("\n");
	printf("\n");
	printf("Projects--\n");
	printf("1. %s",r.pp);
	printf("\n");
	printf("\n");
	printf("TECHNICAL Skills--\n");
	printf("Languages :- %s\n",r.language);
	printf("IT Contructs :- %s\n",r.it);
	printf("Development Tools :- %s\n",r.development);
	printf("Familier with :- %s\n",r.familier);
	printf("\n");
	printf("\n");
	printf("Tranings & Workshops--\n");
	printf(">>%s\n",r.tw1);
	printf(">>%s\n",r.tw2);
	printf(">>%s\n",r.tw3);
	printf(">>%s\n",r.tw4);
	printf(">>%s\n",r.tw5);
	printf("\n");
	printf("\n");
	printf("Awards & Achivements---\n");
	printf(">>%s\n",r.aa1);
	printf(">>%s\n",r.aa2);
	printf(">>%s\n",r.aa3);
	printf(">>%s\n",r.aa4);
	printf(">>%s\n",r.aa5);
}
