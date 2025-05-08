/*wap to find sum of njmbers that are not divisible by 3 up to given number*/

#include<stdio.h>
void main(){
	int num;
	int sum;
	 printf("Enter the number\n");
	 scanf("%d",&num);

	 for(int i=1;i<=num;i++){
		 if(i%3!=0){
			 sum=sum+i;
		 }
	 }
	 printf("sum of number not divisible by 3 = %d\n",sum);

}



