#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int arr[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int s1=0,s2=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                s1=s1+arr[i][j];
            }
            if(i+j==n-1){
                s2=s2+arr[i][j];
            }
        }
    }
    int s3=abs(s1-s2);
    printf("%d\n",s3);
    return 0;
}
