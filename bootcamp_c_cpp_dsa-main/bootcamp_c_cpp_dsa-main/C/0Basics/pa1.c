#include<stdio.h>
void main(){
	int num;
	char chr;
	float rs;
	double crMoney;

	printf("Enter number\n");
	scanf("%d",&num);

	printf("Enter character:\n");
	scanf(" %c",&chr);

	printf("Enter floating number:");
	scanf("%f",&rs);

	printf("Enter Money:");
	scanf("%lf",&crMoney);

	printf("The size of integer is: %ld\n",sizeof(num));
	printf("The size of character is: %ld\n",sizeof(chr));
	printf("The size of floating number is: %ld\n",sizeof(rs));
	printf("The size of double is:%ld\n",sizeof(crMoney));
}
