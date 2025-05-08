#include<stdio.h>
void main(){
	int x;
	printf("Enter number\n");
	scanf("%d",&x);

	int sum;
	while(x<0){
		x=x%10;
		x++;
		x=x/10;
	}
	printf("%d\n",x);
}



