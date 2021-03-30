#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int arr[n][m],i,j,s=0,s1=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(i==j)
				s=s+arr[i][j];
			if(i+j==n-1)
				s1=s1+arr[i][j];
		}
	}
	printf("%d\n",s);
	printf("%d",s1);
	return 0;
}
