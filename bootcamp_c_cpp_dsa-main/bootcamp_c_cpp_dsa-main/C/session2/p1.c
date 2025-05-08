/*1000 11 1728 13 2744 15 4096 17 5832 19 8000*/

#include<stdio.h>
void main(){

	for(int i=10;i<=20;i++){
		if(i%2==0){

			printf("%d ",i*i*i);
		}else{
			printf("%d ",i);
		}
		

	}
	printf("\n");

}
