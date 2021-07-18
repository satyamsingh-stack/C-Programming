#include<stdio.h>
int main(){
	char ch;
	ch=getchar();
	int ans=tolower(ch)-'0'-48;
	printf("%d",ans);
  return 0;
}
