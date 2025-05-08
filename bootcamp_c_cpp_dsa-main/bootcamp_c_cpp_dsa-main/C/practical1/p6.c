/* wap to get 10 number from user and find their sum and avearge*/

#include<stdio.h>
void main(){
	int num,sum=0,avg;

	printf("Enter any 10 number\n");
	for(int i =1;i<=10;i++){

		scanf("%d",&num);
		sum = sum+num;
	}

	avg=sum/10;
	printf("The sum of given number is : %d\n",sum);
	printf("The average of given number is : %d\n",avg);
}
