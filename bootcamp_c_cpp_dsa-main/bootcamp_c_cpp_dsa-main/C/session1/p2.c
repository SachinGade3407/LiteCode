#include<stdio.h>
void main(){

	int num,num1;
	printf("Enter num:");
	scanf("%d",&num);

	printf("Enter num1:");
        scanf("%d",&num1);



	for(int i=80;i>=30;i--){
		if(i%3==0&&i%7==0){
			printf("%d", not divisible by 3 & 7);
		}
	}
}

