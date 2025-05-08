#include<stdio.h>
void main(){
	int sum=0;
	int x,y;
	int z=10;
	int i;

	printf("Enter the number\n");
	scanf("%d",&x);

	printf("Enter the number\n");
	scanf("%d",&y);

	for(int i=x;i<=y;i++){
		sum=i+z;

	printf("%d+%d=%d\n",i,z,sum);
	z=z-1;
	}
}
