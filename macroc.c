#include<stdio.h>
#define n 5
#define p printf
#define s scanf
#define satyam int
#define singh return
int main()
{
	satyam arr[n],i,min,max;
	for(i=0;i<n;i++){
		s("%d",&arr[i]);
	}
	max=min=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>max)	max=arr[i];
		if(arr[i]<min)	min=arr[i];
	}
	p("%dMax\n",max);
	p("%dMin\n",min);
	singh 0;
}
