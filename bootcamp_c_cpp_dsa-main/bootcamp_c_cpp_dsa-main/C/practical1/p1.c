/* wap to check whether the input is a leap year or not*/

#include<stdio.h>
void main(){
	int year;
	
	printf("Enter year\n");
	scanf("%d",&year);

	if(year%4==0){
	        printf("it is leap year\n");

        }else if(year<0){

		printf("Wrong input\n");
	}else{
		printf("it is not leap year\n ");
	}
}
