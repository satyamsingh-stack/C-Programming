#include<stdio.h>
#define n 5
int main()
{
	int arr[n],i,max,min;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	max=min=arr[i];
	for(i=0;i<n;i++){
		if(arr[i]>max)	max=arr[i];
		if(arr[i]<min)  min=arr[i];
	}
	printf("Maximum Element is : %d\n",max);
	printf("Minimum Element is : %d",min);
}
