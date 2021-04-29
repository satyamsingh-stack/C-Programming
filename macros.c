#include<stdio.h>
int main(){
	printf("FILE :%s\n",__FILE__); /*Represent Current File Name*/
	printf("Date :%s\n",__DATE__); /*Represent Current date in MM DD YYYY format*/
	printf("TIME :%s\n",__TIME__); /*Represent Current Time HH:MM:SS */
	printf("LINE :%d\n",__LINE__); /*Represent current line number*/
	printf("STDC :%d\n",__STDC__); /*Represents as 1 when compiler compiles with the ANSI standard*/
	return 0;
}
