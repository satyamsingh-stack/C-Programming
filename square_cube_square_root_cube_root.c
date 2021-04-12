#include<stdio.h>
#include<math.h>
int math(int a,int *square,int *cube,float *square_root,float *cube_root){
	*square=a*a;
	*cube=a*a*a;
	*square_root=sqrt(a);
	*cube_root=pow(a,1.0/3);
}
int main(){
	int a,square,cube;
	float square_root,cube_root;
	scanf("%d",&a);
	math(a,&square,&cube,&square_root,&cube_root);
	printf("Square :%d\nCube :%d\nSquare Root :%f\nCube Root :%f",square,cube,square_root,cube_root);
	return 0;
}
