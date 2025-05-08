//WAP to print the numbers whose factorial is even. take range from user

#include<stdio.h>
void main(){
	int fact=1;
	int start;
	int end;
	printf("enter the start and end value:\n");
	scanf("%d%d",&start,&end);
        
	printf("number whose factorial is even is:\n");
	for(int i=start;i<=end;i++){

		for(int j=1;j<=i;j++){

			fact=fact*j;
		}
			if(fact%2==0){
				printf("%d\t",i);
			}
	}
	printf("\n");
}
