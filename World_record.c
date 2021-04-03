#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		float k1,k2,k3,v;
		scanf("%f%f%f%f",&k1,&k2,&k3,&v);
		float var=100.0/(k1*k2*k3*v);
		float k=9.575;
		if(var>=k){
			printf("NO\n");
		}
		else{
			printf("YES\n");
		}
	}
	return 0;
}
