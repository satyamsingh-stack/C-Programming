#include<Stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int arr[n][m],i,j,arr1[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			arr1[j][i]=arr[i][j];
		}
	}for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
