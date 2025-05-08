#include<stdio.h>
void main(){

	 int num;
	 printf("Enter number:");
	 scanf("%d",&num);

	 if (num>0){
		 
	printf("you entered positive number.");
		 
	 }else if(num<0){
	printf("you entered negative number.");
	 }else{
		 printf("zero is neither positive nor negative\n");

	 }
}

