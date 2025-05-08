/* wap that takes angles of a triangle from the user and printf whether that triganle is valid or not*/

#include<stdio.h>
void main(){
	
	float x,y,z;
	float sum =0;

	printf("Enter the 3 angle of a triangle\n");
	scanf("%f%f%f",&x,&y,&z);

	sum=x+y+z;

	if(sum==180){
		printf("Given angles are of Triangle\n");
	}else{
		printf("invalid angles\n");
	}
}
