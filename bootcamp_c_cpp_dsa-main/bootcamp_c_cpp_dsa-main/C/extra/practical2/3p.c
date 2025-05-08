#include<stdio.h>
void main(){
	int x;
	int count=0;
	int sum=0;

	printf("Enter x\n");
	scanf("%d",&x);

	for(int i=1;i<=x;i++){
		if(x%i==1){
			printf("divisors:%d\n",i);
			count++;
			sum=sum+i;
		}
	}

		printf("The count of divisors is %d\n",count);
		printf("The add of divisors is %d\n",sum);
}
