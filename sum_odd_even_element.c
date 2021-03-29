#include<stdio.h>
#include<malloc.h>
int sum_even(int *arr,int n){
	int i,even=0;
	for(i=0;i<n;i++){
		if(arr[i]%2==0)	{
			even=even+arr[i];	
		}
	}
	return even;
}
int sum_odd(int *arr,int n){
	int i,odd=0;
	for(i=0;i<n;i++){
		if(arr[i]%2!=0){
			odd=odd+arr[i];
		}
	}
	return odd;
}
int main()
{
	int n,*arr,even=0,odd=0,i;
	scanf("%d",&n);
	arr=malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int ans1=sum_even(arr,n);
	int ans2=sum_odd(arr,n);
	printf("Sum of Even Element : %d\n",ans1);
	printf("Sum of Odd Element : %d",ans2);
	return 0;
}
