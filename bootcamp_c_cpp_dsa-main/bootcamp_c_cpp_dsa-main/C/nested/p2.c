#include<stdio.h>
void main(){

	char ch ='A';
	char i,j;


		for(i=1;i<=3;i++){

			for(j=1;j<=i;j++){

				printf("%c ",ch);
			}
			printf("\n");

			ch=ch+2;
		}
}
