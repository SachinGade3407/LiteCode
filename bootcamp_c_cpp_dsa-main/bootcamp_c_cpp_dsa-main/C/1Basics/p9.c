#include<stdio.h>
void main(){

	int num1,num2;
	int add=0;

	printf("Enter num1\n");
	scanf("%d",&num1);
	
	printf("Enter num2\n");
        scanf("%d",&num2);

	for(int i=num1;i<=num2;i++){
		if(i%2!=0){
			add=add+i;
		}
		printf("The addition of odd number is : %d\n",add);
	}
}


