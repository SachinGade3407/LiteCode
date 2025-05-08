#include<stdio.h>


struct OTT{

	int account;
	float price;
	char pmName;
};
void main(){


	struct OTT obj1={2,149.00,"netflix"};
	struct OTT obj2;

	printf("Enter platform name\n");
	gets(obj2.pmName);
	
	printf("total account:\n");
	scanf("%d",&obj2.account);
	
	printf("sub price:\n");
	scanf("%f",&obj2.price);
	
	printf("%s\n",obj1.pmName);
	printf("%d\n",obj1.account);
	printf("%f\n",obj1.price);

	printf("%s\n",obj2.pmName);
	printf("%d\n",obj2.account); 
	printf("%f\n",obj2.price);
}
