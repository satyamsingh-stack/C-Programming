#include <stdio.h>
#include<math.h>
int main(){
    int a,b,c ;
    float  p,s,x;
    scanf("%d %d %d",&a,&b,&c);
    p=a+b+c;
    s=p/2;
    x=sqrt(s*((s-a)*(s-b)*(s-c)));
    if(x>0)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
	return 0;
}
